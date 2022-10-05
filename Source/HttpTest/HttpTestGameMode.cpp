// Copyright Epic Games, Inc. All Rights Reserved.

#include "HttpTestGameMode.h"
#include "HttpTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHttpTestGameMode::AHttpTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AHttpTestGameMode::StartPlay()
{
	Super::StartPlay();

	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &AHttpTestGameMode::OnResponseReceived);
	Request->SetURL("https://jsonplaceholder.typicode.com/posts/1");
	Request->SetVerb("GET");
	Request->ProcessRequest();
}

void AHttpTestGameMode::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully) 
{
	UE_LOG(LogTemp, Display,TEXT("Response %s"), *Response->GetContentAsString());

}
