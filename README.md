## Custom Repository for Custom Engine build.
- Added suppport for Unreal 4.26
- Added Blueprint and C++ GameDriver API
- Improvements to the Recorder and Editor tools
- Improved input recording/playback


## Concept

1. GameDriver works by placing a small plugin in your game. That plugin communicates via the GameDriver API, which you use to drive your game remotely for testing.
2. Setting up the plugin requires copying a folder into your project and downloading the license file to the correct location.
3. Once the plugin is installed you integrate our API into your testing framework and start using it to define your tests.

## What you do next

1. Create an empty "unrealPlugin" folder inside the "Plugins" directory of your project.
2. Grab the GameDriver folder from inside the folder corresponding to your unreal engine version (4_27, 5_1, ETC) and copy it in the unrealPlugin folder you just created.
3. Place a valid license (gdio.license.txt) in a folder named "GameDriver" inside the "Content" folder of your project. A trial license can be requested at gamedriver.io/trial or by contacting sales@gamedriver.io.
4. Optionally, copy the provided `sample.gdio.unreal_agent.config.txt` to the same folder as above. Rename the file to `gdio.unreal_agent.config.txt`
5. Open the project and click run to see the GDIO panel displaying. 
6. Now you're ready to write external tests! You can connect to the running agent from your own test project using GameDriver's unreal_api in the zip file contained herein.

## Common issues

1. In order to simulate mouse clicks in the editor you will need to unset the "High DPI Support" flag in the editor preferences.
![[img/EditorPreferences.png]]
2. You may need to build clean for your project at some point. Doing so will delete the precompiled binaries for the plugin. To rectify this recopy the "Binary" and " Intermediate" from the zip into your project's Plugin folder after making clean (or recopy the entire Plugin folder - if you prefer).
3. To deploy on Mobile you'll need to add the GameDriver folder inside of Content to the list of "Additional non-Asset directories to Package".

## Summary

Your final Project will look like the following:

```dirtree
SomeProjectPath/
└─ Plugins/
   └─ unrealPlugin		
	└─GameDriver				<----- Place the GameDriver folder here 
└─ Content
   └─ GameDriver
	└─ gdio.license				<----- Place your license here
	└─ gdio.unreal_agent.config.txt		<----- Place your optional config file here (control port, location of gui overlay)
└─ MyProject.uproject	
└─ MyProject.sln	
```