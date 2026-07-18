MTestTy::GetMessage:
005E5FB0  55                        PUSH EBP
005E5FB1  8B EC                     MOV EBP,ESP
005E5FB3  83 EC 4C                  SUB ESP,0x4c
005E5FB6  53                        PUSH EBX
005E5FB7  56                        PUSH ESI
005E5FB8  8B F1                     MOV ESI,ECX
005E5FBA  57                        PUSH EDI
005E5FBB  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005E5FBE  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005E5FC5  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005E5FC8  E8 E3 F1 0F 00            CALL 0x006e51b0
005E5FCD  33 DB                     XOR EBX,EBX
005E5FCF  89 86 A1 00 00 00         MOV dword ptr [ESI + 0xa1],EAX
005E5FD5  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E5FDA  8D 55 B8                  LEA EDX,[EBP + -0x48]
005E5FDD  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005E5FE0  53                        PUSH EBX
005E5FE1  52                        PUSH EDX
005E5FE2  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005E5FE5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E5FEB  E8 00 78 14 00            CALL 0x0072d7f0
005E5FF0  8B F0                     MOV ESI,EAX
005E5FF2  83 C4 08                  ADD ESP,0x8
005E5FF5  3B F3                     CMP ESI,EBX
005E5FF7  0F 85 6C 03 00 00         JNZ 0x005e6369
005E5FFD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005E6000  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005E6003  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
005E6006  83 F8 64                  CMP EAX,0x64
005E6009  0F 87 3D 03 00 00         JA 0x005e634c
005E600F  33 C9                     XOR ECX,ECX
005E6011  8A 88 D0 63 5E 00         MOV CL,byte ptr [EAX + 0x5e63d0]
switchD_005e6017::switchD:
005E6017  FF 24 8D B4 63 5E 00      JMP dword ptr [ECX*0x4 + 0x5e63b4]
switchD_005e6017::caseD_2:
005E601E  8B CF                     MOV ECX,EDI
005E6020  E8 ED F2 E1 FF            CALL 0x00405312
005E6025  E9 22 03 00 00            JMP 0x005e634c
switchD_005e6017::caseD_3:
005E602A  8B CF                     MOV ECX,EDI
005E602C  E8 14 B1 E1 FF            CALL 0x00401145
005E6031  E9 16 03 00 00            JMP 0x005e634c
switchD_005e6017::caseD_5:
005E6036  8B CF                     MOV ECX,EDI
005E6038  E8 3F DE E1 FF            CALL 0x00403e7c
005E603D  E9 0A 03 00 00            JMP 0x005e634c
switchD_005e6017::caseD_0:
005E6042  8B CF                     MOV ECX,EDI
005E6044  E8 C7 D6 E1 FF            CALL 0x00403710
005E6049  E9 FE 02 00 00            JMP 0x005e634c
switchD_005e6017::caseD_62:
005E604E  8A 87 B3 00 00 00         MOV AL,byte ptr [EDI + 0xb3]
005E6054  3A C3                     CMP AL,BL
005E6056  0F 84 89 01 00 00         JZ 0x005e61e5
005E605C  3C 04                     CMP AL,0x4
005E605E  0F 85 E8 02 00 00         JNZ 0x005e634c
005E6064  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
005E6067  E8 44 F1 0F 00            CALL 0x006e51b0
005E606C  A3 74 17 81 00            MOV [0x00811774],EAX
005E6071  C6 87 B3 00 00 00 05      MOV byte ptr [EDI + 0xb3],0x5
005E6078  8B 0D 78 17 81 00         MOV ECX,dword ptr [0x00811778]
005E607E  3B CB                     CMP ECX,EBX
005E6080  74 1A                     JZ 0x005e609c
005E6082  E8 03 B2 E1 FF            CALL 0x0040128a
005E6087  8B 15 78 17 81 00         MOV EDX,dword ptr [0x00811778]
005E608D  52                        PUSH EDX
005E608E  E8 1D 82 14 00            CALL 0x0072e2b0
005E6093  83 C4 04                  ADD ESP,0x4
005E6096  89 1D 78 17 81 00         MOV dword ptr [0x00811778],EBX
LAB_005e609c:
005E609C  6A 33                     PUSH 0x33
005E609E  E8 8D 84 14 00            CALL 0x0072e530
005E60A3  83 C4 04                  ADD ESP,0x4
005E60A6  3B C3                     CMP EAX,EBX
005E60A8  74 3A                     JZ 0x005e60e4
005E60AA  83 C9 FF                  OR ECX,0xffffffff
005E60AD  BE 01 00 00 00            MOV ESI,0x1
005E60B2  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005E60B6  88 18                     MOV byte ptr [EAX],BL
005E60B8  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005E60BB  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005E60BF  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005E60C2  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005E60C5  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005E60C8  89 70 1B                  MOV dword ptr [EAX + 0x1b],ESI
005E60CB  89 70 13                  MOV dword ptr [EAX + 0x13],ESI
005E60CE  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005E60D1  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005E60D4  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005E60D7  89 70 2F                  MOV dword ptr [EAX + 0x2f],ESI
005E60DA  89 70 2B                  MOV dword ptr [EAX + 0x2b],ESI
005E60DD  A3 78 17 81 00            MOV [0x00811778],EAX
005E60E2  EB 0C                     JMP 0x005e60f0
LAB_005e60e4:
005E60E4  33 C0                     XOR EAX,EAX
005E60E6  BE 01 00 00 00            MOV ESI,0x1
005E60EB  A3 78 17 81 00            MOV [0x00811778],EAX
LAB_005e60f0:
005E60F0  3B C3                     CMP EAX,EBX
005E60F2  0F 84 54 02 00 00         JZ 0x005e634c
005E60F8  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E60FD  68 21 01 00 00            PUSH 0x121
005E6102  68 F9 00 00 00            PUSH 0xf9
005E6107  68 B4 00 00 00            PUSH 0xb4
005E610C  6A 0A                     PUSH 0xa
005E610E  50                        PUSH EAX
005E610F  E8 6C FE 0C 00            CALL 0x006b5f80
005E6114  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E611A  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005E6120  81 C1 40 01 00 00         ADD ECX,0x140
005E6126  51                        PUSH ECX
005E6127  68 23 01 00 00            PUSH 0x123
005E612C  68 F9 00 00 00            PUSH 0xf9
005E6131  68 B4 00 00 00            PUSH 0xb4
005E6136  6A 0A                     PUSH 0xa
005E6138  53                        PUSH EBX
005E6139  53                        PUSH EBX
005E613A  52                        PUSH EDX
005E613B  E8 59 CF E1 FF            CALL 0x00403099
005E6140  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E6145  53                        PUSH EBX
005E6146  56                        PUSH ESI
005E6147  6A 10                     PUSH 0x10
005E6149  56                        PUSH ESI
005E614A  68 23 01 00 00            PUSH 0x123
005E614F  68 F9 00 00 00            PUSH 0xf9
005E6154  68 B4 00 00 00            PUSH 0xb4
005E6159  6A 0A                     PUSH 0xa
005E615B  50                        PUSH EAX
005E615C  E8 8F 98 0D 00            CALL 0x006bf9f0
005E6161  8B 0D 78 17 81 00         MOV ECX,dword ptr [0x00811778]
005E6167  50                        PUSH EAX
005E6168  68 B4 00 00 00            PUSH 0xb4
005E616D  6A 0A                     PUSH 0xa
005E616F  6A 04                     PUSH 0x4
005E6171  E8 27 E4 E1 FF            CALL 0x0040459d
005E6176  A1 78 17 81 00            MOV EAX,[0x00811778]
005E617B  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005E617E  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005E6185  A1 78 17 81 00            MOV EAX,[0x00811778]
005E618A  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E618D  3B C3                     CMP EAX,EBX
005E618F  7C 0D                     JL 0x005e619e
005E6191  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E6197  50                        PUSH EAX
005E6198  51                        PUSH ECX
005E6199  E8 92 D2 0C 00            CALL 0x006b3430
LAB_005e619e:
005E619E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E61A4  68 21 01 00 00            PUSH 0x121
005E61A9  68 F9 00 00 00            PUSH 0xf9
005E61AE  68 B4 00 00 00            PUSH 0xb4
005E61B3  6A 0A                     PUSH 0xa
005E61B5  52                        PUSH EDX
005E61B6  E8 C5 FD 0C 00            CALL 0x006b5f80
005E61BB  8B 47 5D                  MOV EAX,dword ptr [EDI + 0x5d]
005E61BE  50                        PUSH EAX
005E61BF  56                        PUSH ESI
005E61C0  68 23 01 00 00            PUSH 0x123
005E61C5  68 F9 00 00 00            PUSH 0xf9
005E61CA  68 B4 00 00 00            PUSH 0xb4
005E61CF  6A 0A                     PUSH 0xa
005E61D1  68 B4 00 00 00            PUSH 0xb4
005E61D6  6A 0A                     PUSH 0xa
005E61D8  E8 BB C0 E1 FF            CALL 0x00402298
005E61DD  83 C4 20                  ADD ESP,0x20
005E61E0  E9 67 01 00 00            JMP 0x005e634c
LAB_005e61e5:
005E61E5  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
005E61E8  E8 C3 EF 0F 00            CALL 0x006e51b0
005E61ED  A3 74 17 81 00            MOV [0x00811774],EAX
005E61F2  C6 87 B3 00 00 00 01      MOV byte ptr [EDI + 0xb3],0x1
005E61F9  8B 0D 78 17 81 00         MOV ECX,dword ptr [0x00811778]
005E61FF  3B CB                     CMP ECX,EBX
005E6201  74 1A                     JZ 0x005e621d
005E6203  E8 82 B0 E1 FF            CALL 0x0040128a
005E6208  8B 0D 78 17 81 00         MOV ECX,dword ptr [0x00811778]
005E620E  51                        PUSH ECX
005E620F  E8 9C 80 14 00            CALL 0x0072e2b0
005E6214  83 C4 04                  ADD ESP,0x4
005E6217  89 1D 78 17 81 00         MOV dword ptr [0x00811778],EBX
LAB_005e621d:
005E621D  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E6223  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E6229  81 C2 40 01 00 00         ADD EDX,0x140
005E622F  8D 45 FC                  LEA EAX,[EBP + -0x4]
005E6232  52                        PUSH EDX
005E6233  68 23 01 00 00            PUSH 0x123
005E6238  68 F9 00 00 00            PUSH 0xf9
005E623D  68 99 30 40 00            PUSH 0x403099
005E6242  6A 32                     PUSH 0x32
005E6244  50                        PUSH EAX
005E6245  51                        PUSH ECX
005E6246  E8 E5 C0 0C 00            CALL 0x006b2330
005E624B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005E624E  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E6253  68 B4 00 00 00            PUSH 0xb4
005E6258  83 CE FF                  OR ESI,0xffffffff
005E625B  6A 0A                     PUSH 0xa
005E625D  56                        PUSH ESI
005E625E  52                        PUSH EDX
005E625F  50                        PUSH EAX
005E6260  E8 DB D3 0C 00            CALL 0x006b3640
005E6265  6A 33                     PUSH 0x33
005E6267  E8 C4 82 14 00            CALL 0x0072e530
005E626C  83 C4 04                  ADD ESP,0x4
005E626F  3B C3                     CMP EAX,EBX
005E6271  74 37                     JZ 0x005e62aa
005E6273  B9 01 00 00 00            MOV ECX,0x1
005E6278  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005E627C  88 18                     MOV byte ptr [EAX],BL
005E627E  89 70 03                  MOV dword ptr [EAX + 0x3],ESI
005E6281  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005E6285  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005E6288  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005E628B  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005E628E  89 48 1B                  MOV dword ptr [EAX + 0x1b],ECX
005E6291  89 48 13                  MOV dword ptr [EAX + 0x13],ECX
005E6294  89 70 17                  MOV dword ptr [EAX + 0x17],ESI
005E6297  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005E629A  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005E629D  89 48 2F                  MOV dword ptr [EAX + 0x2f],ECX
005E62A0  89 48 2B                  MOV dword ptr [EAX + 0x2b],ECX
005E62A3  A3 78 17 81 00            MOV [0x00811778],EAX
005E62A8  EB 0C                     JMP 0x005e62b6
LAB_005e62aa:
005E62AA  33 C0                     XOR EAX,EAX
005E62AC  B9 01 00 00 00            MOV ECX,0x1
005E62B1  A3 78 17 81 00            MOV [0x00811778],EAX
LAB_005e62b6:
005E62B6  3B C3                     CMP EAX,EBX
005E62B8  74 5E                     JZ 0x005e6318
005E62BA  53                        PUSH EBX
005E62BB  51                        PUSH ECX
005E62BC  6A 10                     PUSH 0x10
005E62BE  51                        PUSH ECX
005E62BF  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E62C5  68 23 01 00 00            PUSH 0x123
005E62CA  68 F9 00 00 00            PUSH 0xf9
005E62CF  68 B4 00 00 00            PUSH 0xb4
005E62D4  6A 0A                     PUSH 0xa
005E62D6  51                        PUSH ECX
005E62D7  E8 14 97 0D 00            CALL 0x006bf9f0
005E62DC  8B 0D 78 17 81 00         MOV ECX,dword ptr [0x00811778]
005E62E2  50                        PUSH EAX
005E62E3  68 B4 00 00 00            PUSH 0xb4
005E62E8  6A 0A                     PUSH 0xa
005E62EA  6A 04                     PUSH 0x4
005E62EC  E8 AC E2 E1 FF            CALL 0x0040459d
005E62F1  A1 78 17 81 00            MOV EAX,[0x00811778]
005E62F6  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
005E62F9  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005E62FD  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005E6300  A1 78 17 81 00            MOV EAX,[0x00811778]
005E6305  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E6308  3B C3                     CMP EAX,EBX
005E630A  7C 0C                     JL 0x005e6318
005E630C  50                        PUSH EAX
005E630D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E6312  50                        PUSH EAX
005E6313  E8 18 D1 0C 00            CALL 0x006b3430
LAB_005e6318:
005E6318  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E631B  3B C6                     CMP EAX,ESI
005E631D  74 2D                     JZ 0x005e634c
005E631F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E6325  50                        PUSH EAX
005E6326  51                        PUSH ECX
005E6327  E8 84 D8 0C 00            CALL 0x006b3bb0
005E632C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005E632F  EB 1B                     JMP 0x005e634c
switchD_005e6017::caseD_64:
005E6331  8B CF                     MOV ECX,EDI
005E6333  E8 E1 B6 E1 FF            CALL 0x00401a19
005E6338  C7 87 8D 00 00 00 01 00 00 00  MOV dword ptr [EDI + 0x8d],0x1
005E6342  C7 87 91 00 00 00 02 71 00 00  MOV dword ptr [EDI + 0x91],0x7102
switchD_005e6017::caseD_1:
005E634C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005E634F  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005E6352  50                        PUSH EAX
005E6353  8B CF                     MOV ECX,EDI
005E6355  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E635B  E8 70 FC 0F 00            CALL 0x006e5fd0
005E6360  5F                        POP EDI
005E6361  5E                        POP ESI
005E6362  5B                        POP EBX
005E6363  8B E5                     MOV ESP,EBP
005E6365  5D                        POP EBP
005E6366  C2 04 00                  RET 0x4
LAB_005e6369:
005E6369  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005E636C  68 44 DD 7C 00            PUSH 0x7cdd44
005E6371  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E6376  56                        PUSH ESI
005E6377  53                        PUSH EBX
005E6378  68 B5 00 00 00            PUSH 0xb5
005E637D  68 BC DC 7C 00            PUSH 0x7cdcbc
005E6382  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E6388  E8 43 71 0C 00            CALL 0x006ad4d0
005E638D  83 C4 18                  ADD ESP,0x18
005E6390  85 C0                     TEST EAX,EAX
005E6392  74 01                     JZ 0x005e6395
005E6394  CC                        INT3
LAB_005e6395:
005E6395  68 B5 00 00 00            PUSH 0xb5
005E639A  68 BC DC 7C 00            PUSH 0x7cdcbc
005E639F  53                        PUSH EBX
005E63A0  56                        PUSH ESI
005E63A1  E8 9A FA 0B 00            CALL 0x006a5e40
005E63A6  5F                        POP EDI
005E63A7  5E                        POP ESI
005E63A8  B8 FF FF 00 00            MOV EAX,0xffff
005E63AD  5B                        POP EBX
005E63AE  8B E5                     MOV ESP,EBP
005E63B0  5D                        POP EBP
005E63B1  C2 04 00                  RET 0x4
