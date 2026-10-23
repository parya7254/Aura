# 10/19/2026 Started project!! (Arya: 45 mins)

Arya: Today, we started working on this project! We decided to make a smart WS2812B lamp with Google Home integration! We started off with placing things on the schematic, and I went and searched for a decent ESP32-S3 module! We did place some simple things on the schematic like a radar, LDO, etc. We decided to do a radar so that the lamp would smartly turn on when someone approaches it. We might be adding some more to the schematic, but I feel like we have the core components in.

Lapse: https://lapse.hackclub.com/timelapse/cUiMAB_ottTp

<img width="994" height="668" alt="image" src="https://github.com/user-attachments/assets/28984003-a7ee-4151-8cec-187f526fe6b9" />

# 10/20/2026 Finished component placement + wired MAX98357A!! (Arya: 1hr)

Arya: Today, we managed to finish the placement for the components on the PCB and we currently to not have too much. I also started and finished the wiring of the MAX98357A on the schematic! I did do a lot of reading of the datasheet for this since I am used to the modules, not the bare chips. I feel like there is some more things that need to be added to the schematic for the speaker amplifier so I will take a deeper look on the wiring when I work on this again. I will try to get this amplifier to the loudest setting so that the smart lamp would fill a lot of the area around it with loud sound. 

Lapse: https://lapse.hackclub.com/timelapse/H03_j8s2ZEAL

<img width="766" height="417" alt="image" src="https://github.com/user-attachments/assets/d27b2ecb-c14d-48ad-a373-3c17cbe811e5" />

# 10/21/2026 Datasheet Reading + Fixing Pins!! (Arya: 30 mins)

Arya: Today, I did not have too much time to work, but I managed to get some fixes in for some pins and also get some datasheet reading in! I started off with the pins for the TFT touch display because I noticed that they were wrong so I fixed the wiring and renamed the symbols so that the pinout would match the pinout of a TFT touch display! I then moved on to the amplifier from yesterday, but I did not have enough time to find what I was looking for and give it the correct values. I did manage to get some reading of the datasheet in, though. I initially thought that the preset channel would be mono audio but that turned out to be false, so I saw an example schematic and was going to copy that, before I realized that the values shown were for 1.8V, which was very different than the 5V or 3.3V that will be available. I would have never noticed this if I had not read the smaller text on the datasheet. I also had some trouble finding the resistor values needed to set the amplifier to mono mode since that will need to be the default as we only have one speaker. I will try to get this done next time, so hopefully I have enough time then!

Lapse: https://lapse.hackclub.com/timelapse/ADDqVgfokMFf

<img width="340" height="411" alt="image" src="https://github.com/user-attachments/assets/928a490f-7016-4813-872c-2b4f8b4a2eff" />

# 10/22/2026 Finished wiring MAX98357A + wired LDO!! (Arya: 30 mins)

Arya: Today, I read through the datasheet some more and completed the wiring for the amplifier! I did use some AI to help me and I went back and confirmed it with the datasheet! I found a proper table that gave example values for pullups for the voltages listed, and I put the proper resistor needed in! I conformed all of the other wiring and it was correct! I also started and finished the wiring for the LDO. The LDO was not hard to wire, but I did get a little stuck on the tab pin on the footprint, which the datasheet did not mention at all for wiring.

Lapse: https://lapse.hackclub.com/timelapse/M89l0f_t1XQr

<img width="2362" height="1672" alt="SCH_Schematic1_1-P1_2026-10-22" src="https://github.com/user-attachments/assets/0eb28720-9272-4185-bada-c32523e4d8e9" />
