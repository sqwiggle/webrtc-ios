WebRTC SDK for iOS
==================

This is derived from [Google's implementation of webrtc](https://code.google.com/p/webrtc/) with some slight modification to how the quality of video is handled.

Pre-built Library Download:
----------------
[WebRTC for iOS download](https://webrtc-builds.s3.amazonaws.com/webrtc-ios-libs.zip)

Requirements:
-------------
- GIT (obviously)
- Chrome Depot Tools
- Beer

Installation instructions:
---------------
- Install depot tools,unless you already have them.
	- To install, run the following command in terminal: <br />
	``` git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git ```
	- Add the following line to your .bash_profile:<br /> 
	``` export PATH=/a_bunch_of_stuff:/working_directory/depot_tools:$PATH ```
	- Restart your terminal or run the following so changes take effect:<br />
	``` source ~/.bash_profile ```
- Clone this repo.

That's it! Simple right?

Building instructions:
----------------------
- In Terminal, go to the root directory of this repository.
- Run ``` ./build_webrtc ```.
- Upon completion, all necessary libraries will be exported to ``` trunk/out_ios ```. The will have have a postfix of ``` *.a ```. 
- All headers required to access libraries are available at ``` trunk/app/webrtc/objc/public ```. Copy these over to wherever you copied over the libraries.




