# TOU_Stress_Ball

## About
---
> We're stuck in a panoramic, whether we like it or not. It's stressful and sometimes depressing and repetitive, but you don't have to face it alone. With the TOU Stress Ball, you can physically show other people that you're here for them, there with them (kinda) and that you care for them, no matter where you are in the world and vice versa. All you need is a WiFi connection.
> It's also important to show love to yourself and release some of the physical tension that inevitably builds up in a panasonic. That is why this is not just a long-distance device, but also functons as a personal, super-fun and squishy stress ball!

<br />
> Thinking Of U :)
 What a wonderful way to show someone that you're on their mind, that you matter to them, that they think of you from time to time. Perfect for friends, family and couples, especially in these trying times.

<br />
## How It Works
---
* Each stress ball is configured with an ESP32 module that enables transfer of signal data from the pressure sensor in a ball over Wi-Fi to the Google Cloud Platform (GCP). Using the IoT Core API, this data is then sent from the GCP to the other ball registered in the session wirelessly and triggers the RGB LED inside to glow a particular hue. This process can be replicated from any ball in the session to interact with another.
<br />
## Tools Used
---
GCP, IoT Core, ESP32 DevKit V1, Thin Film resistive pressure sensors, Balloons, Stuffing material
<br />
## Challenges We Ran Into
---
* Firstly, the tools and components we ordered did not arrive (and still haven't arrived :/) despite paying extra for priority shipping. We decided this idea and opportunity was too valuable to give in so we made a rush order from a different platform
* Connecting the boards to the WiFi was a big pain in the butt at first, especially with trying to configure the boards to connect to the cloud first
<br />
## Accomplishments We're Proud Of
---
* We refused to give up in the face of not having the parts to actually make a prototype and adapted to the situation
* Delegation of tasks and rising up to the occasion as a two man team
* Learning new skills and interacting with new technologies

<br />
## What's Next for the TOU Stress Ball
---
* Replace the prototype exterior with translucent material more appropriate for a stress ball.
* Make stress ball wireless and use the stand as a wireless charger
* Implement group session functionality so that one can interact with more than one person at a time (have different colors registered for different people in your group and choose who you want to light up)

<br />
## Sources
---
* https://www.youtube.com/watch?v=bngPdbyh6IM
* https://randomnerdtutorials.com/esp32-pinout-reference-gpios/
* 
