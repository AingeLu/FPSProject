// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class UnrealProject : ModuleRules
{
	public UnrealProject(ReadOnlyTargetRules Target) : base(Target)
	{
        // ����Ԥ����ͷ�ļ���ʹ�÷�ʽ
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // ����slua_unreal�������������·����
        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "slua_unreal",
            "Slate",
            "SlateCore",
            "UMG"
        });

        PublicIncludePathModuleNames.AddRange(new string[]
        {
            "slua_unreal"
        });

        PrivateIncludePathModuleNames.AddRange(new string[]
        {
            "slua_unreal"
        });
        
        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true

        PrivateIncludePaths.AddRange(new string[]
        {
            "UnrealProject/Lua",
            "UnrealProject/Maps",
            "UnrealProject/Player",
            "UnrealProject/UI",
            "UnrealProject/UI/Entry",
        });
    }
}
