<div align="center">
	<a href="https://console.cloud.google.com/" target="_blank" rel="noreferrer"><img src="https://i.ibb.co/hVbq7bF/unnamed.png" width="50" height="50" alt="Google developer console" /></a>
 <h1>Google Developer Console [Chrome Desktop]</h1>
</div>
  <div align="center">
<a href="https://console.cloud.google.com/" target="_blank" rel="noreferrer"><img src="https://github.com/abdimk/Google-dev-VNC/blob/7090283e25728be63398f52ed09b43ed5380af1e/images/desktop.png" width="650" height="400" alt="Google developer console" /></a>
  </div>
	<div align="center">
		<a href="">
		<img src="https://shields.io/endpoint?url=https://badges.readysetplay.io/workflow/filiptibell/lune/ci.yaml" alt="CI status" />
		</a>
		<a href="">
			<img src="https://shields.io/endpoint?url=https://badges.readysetplay.io/workflow/filiptibell/lune/ci.yaml" alt="CI status" />
		</a>
		<a href="">
			<img src="https://shields.io/endpoint?url=https://badges.readysetplay.io/workflow/filiptibell/lune/release.yaml" alt="Release status" />
		</a>
		

</div>




---
## Introduction
<p>  This GitHub <strong>repository</strong> is a great resource for anyone looking to learn how to set up <strong>Chrome desktop </strong>view in the Google Developer Console. By following the instructions provided in the repository, you can easily <strong>configure</strong> your Google Developer Console to display your web pages as they would appear on a desktop browser. </p>

<p>This can be incredibly useful for <strong>testing</strong> and <strong>debugging</strong> your web applications, and can help ensure that your users have the best possible experience when using your website.</p>
---

## Objectives

- Create a headless Compute Engine VM instance to run Chrome Remote Desktop on.
- Install and configure the Chrome Remote Desktop service on the VM instance.
- Set up an X Window System desktop environment in the VM instance.
- Connect from your local computer to the desktop environment on the VM instance.


### Note
<p>This solution is not suitable for graphically intensive applications, including playing videos, because those typically require hardware graphics acceleration as well as a network that has high bandwidth and low latency. If you want to run graphically intense applications remotely, see the Creating a virtual GPU-accelerated Linux workstation tutorial for an alternative solution.</p>

[Read more](https://cloud.google.com/architecture/chrome-desktop-remote-on-compute-engine?_ga=2.54915049.-316264778.1626084193)
## Where do we start? 

### i abdisa will not be responsible for any activity you will be doing on the server ! 
## Installation

- Head to Google Developer Console [console.clould.google.com](https://console.cloud.google.com/)
  <br>
<div align="left">
<a href="https://console.cloud.google.com/" target="_blank" rel="noreferrer"><img src="https://github.com/abdimk/Google-dev-VNC/blob/main/images/1_ex.jpg" width="500" height="150" alt="Google developer console" /></a>
  </div>
  
<p>Start by creating new project if you have an existing project like i have just click the terminal and also don't forget you can't cretae more than 12 project on the free account so use it wisely </p>
<br>
<div align="left">
<a href="https://console.cloud.google.com/" target="_blank" rel="noreferrer"><img src="https://github.com/abdimk/Google-dev-VNC/blob/main/images/terminal.png" width="600" height="150" alt="Google developer console" /></a>
  </div>

<br>
Clone this github repository 

```diff
   git clone https://github.com/abdimk/Google-dev-VNC/
```
<br>
Head to the dir

```diff
   cd Google-dev-VNC
```
<br>
copy the setup.py to home

```diff
cp setup.py ../
```

<br>
run the setup

```diff
python setup.py
```

Head to remote desktop [Headless](https://remotedesktop.google.com/headless)
<br>

<br>
<div align="left">
<a href="https://console.cloud.google.com/" target="_blank" rel="noreferrer"><img src="https://github.com/abdimk/Google-dev-VNC/blob/main/images/begin.png" width="500" height="170" alt="Google developer console" /></a>
  </div>
  <br>
<p><strong>Next </strong>, <strong>Begin</strong>, <strong>Authorize</strong></p>
