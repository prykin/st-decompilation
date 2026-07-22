CreateViewer:
0071F210  68 F8 01 00 00            PUSH 0x1f8
0071F215  E8 B6 12 F9 FF            CALL 0x006b04d0
0071F21A  85 C0                     TEST EAX,EAX
0071F21C  74 07                     JZ 0x0071f225
0071F21E  8B C8                     MOV ECX,EAX
0071F220  E9 CB F4 FF FF            JMP 0x0071e6f0
LAB_0071f225:
0071F225  33 C0                     XOR EAX,EAX
0071F227  C3                        RET
