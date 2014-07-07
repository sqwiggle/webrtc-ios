WebRTC SDK for iOS
==================

This is derived from [Google's implementation of webrtc](https://code.google.com/p/webrtc/) with some slight modification to how the quality of video is handled.

Requirements:
-------------
- GIT (obviously)
- Chrome Depot Tools
- Beer

Installation instructions (Parts taken from Ninjatec's awesome [blog post](http://ninjanetic.com/how-to-get-started-with-webrtc-and-ios-without-wasting-10-hours-of-your-life/)):
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

ToDo:
-----
- Travis Build.
- Script to centralize headers and libraries. 




