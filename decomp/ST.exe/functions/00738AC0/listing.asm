FUN_00738ac0:
00738AC0  55                        PUSH EBP
00738AC1  8B EC                     MOV EBP,ESP
00738AC3  83 EC 08                  SUB ESP,0x8
00738AC6  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
00738ACD  7E 13                     JLE 0x00738ae2
00738ACF  6A 04                     PUSH 0x4
00738AD1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00738AD4  50                        PUSH EAX
00738AD5  E8 36 7B FF FF            CALL 0x00730610
00738ADA  83 C4 08                  ADD ESP,0x8
00738ADD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00738AE0  EB 15                     JMP 0x00738af7
LAB_00738ae2:
00738AE2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00738AE5  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
00738AEB  33 C0                     XOR EAX,EAX
00738AED  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
00738AF1  83 E0 04                  AND EAX,0x4
00738AF4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00738af7:
00738AF7  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00738AFB  74 08                     JZ 0x00738b05
00738AFD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00738B00  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00738B03  EB 0C                     JMP 0x00738b11
LAB_00738b05:
00738B05  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00738B08  83 E2 DF                  AND EDX,0xffffffdf
00738B0B  83 EA 07                  SUB EDX,0x7
00738B0E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00738b11:
00738B11  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00738B14  8B E5                     MOV ESP,EBP
00738B16  5D                        POP EBP
00738B17  C3                        RET
