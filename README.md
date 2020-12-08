# AWS IoT Jobs - HTTPS Example Build
This is a clone of the https://github.com/NordicPlayground/fw-nrfconnect-nrf to complete an AWS IoT Job using HTTPS.

# nrf9160-dk-aws-fota-secure

This repository contains the Nordic-specific source code additions to open source projects (Zephyr RTOS and MCUboot). It must be combined with nrfxlib and the repositories that use the same naming convention to build the provided samples and to use the additional subsystems and libraries.

The following repositories must be combined with fw-nrfconnect-nrf:

fw-nrfconnect-zephyr
fw-nrfconnect-mcuboot
nrfxlib
Documentation
Official documentation at:

Latest: http://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest
All versions: http://developer.nordicsemi.com/nRF_Connect_SDK/doc/
Disclaimer
nRF Connect SDK supports development with nRF9160 Cellular IoT devices. It is also your starting point for developing Bluetooth Low Energy applications on the nRF5340, though support for nRF5340 is still experimental. It contains references and code for Bluetooth Low Energy devices in the nRF52 Series, though development on these devices is not currently supported with the nRF Connect SDK.

# Perform FOTA Updates on a Nordic nrf9160-dk with AWS IoT Jobs
*About this Guide*
This guide is intended to provide an example of how to use AWS IoT Jobs to update a Nordic nrf9160-dk with ZephyrOS over HTTPS. 

# Overview

# Before You Begin / Considerations
This example is meant to be a guide and starting point for you launch your own FOTA updates with. AWS IoT Jobs on the nrf9160-dk. You will want to adjust. your security and job parameters to match your needs.

This is a clone of the https://github.com/NordicPlayground/fw-nrfconnect-nrf to complete an AWS IoT Job using HTTPS.

# Cost
You will be responsible for the cost of all the AWS services used in this example which should be less than $5 USD as of current writing. Most nrf9160-dk kits come with an eSIM from iBASIS, if you do not have one,  please locate a suitable eSIM for your testing and have at least 500MB of data available for the purposes of this guide.

# Procedural Sections
To complete this guide, you will need to install the latest version of nRF Connect for Desktop (https://www.nordicsemi.com/Software-and-tools/Development-Tools/nRF-Connect-for-desktop).

Once you have the the nRF Connect for Desktop installed, you will follow the nRF9160: AWS FOTA (https://developer.nordicsemi.com/nRF_Connect_SDK/doc/latest/nrf/samples/nrf9160/aws_fota/README.html) example that is provided by Nordic. It would be good practice to run through this example in its entirety before moving on to the next step, as we will be using this as a base and making changes to the sample application so that we can perform this FOTA update securely over https vs 

# Walkthrough
(Optional)
A walkthrough section is a procedural section for a specific implementation of the use case presented in the guide. It should include how-to-instructions and any supporting diagrams, images, or tables for the specific implementation described in the walkthrough.

# Security
This guide is intended for demo purposes only and considerations should be made for the security policies to be more restrictive instead of what is created here. Always start with a least privileged model and only allow trusted access based upon your own security policies.  

# Source Code
(Optional)
If the implementation of the use case you’re presenting in this guide requires source code, include it in this section.

# Conclusion
Now that you have completed this walkthrough, you should have the ability to push AWS IoT jobs from your AWS IoT Console and perform secure updates over HTTPS to your nrf9160-dk. You can use this knowledge as a baseline to further integrate your nrf9160 based IoT devices into other AWS IoT services and manage them securely in the field. 

# Contributors
Aaron Curtis - Sr Solutions Architect 
Paul Vincent - Sr Solutions Architect 

# Document Revisions
December 2020 - Initial Publication


## Notes
(Optional)
Include any endnote references from the document.
