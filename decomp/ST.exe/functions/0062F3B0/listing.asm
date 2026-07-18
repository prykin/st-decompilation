STRubbishC::LoadImagSpr:
0062F3B0  55                        PUSH EBP
0062F3B1  8B EC                     MOV EBP,ESP
0062F3B3  83 EC 58                  SUB ESP,0x58
0062F3B6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0062F3B9  56                        PUSH ESI
0062F3BA  48                        DEC EAX
0062F3BB  57                        PUSH EDI
0062F3BC  83 F8 05                  CMP EAX,0x5
0062F3BF  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0062F3C6  77 21                     JA 0x0062f3e9
switchD_0062f3c8::switchD:
0062F3C8  FF 24 85 FC F5 62 00      JMP dword ptr [EAX*0x4 + 0x62f5fc]
switchD_0062f3c8::caseD_1:
0062F3CF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062F3D2  8B 01                     MOV EAX,dword ptr [ECX]
0062F3D4  C1 E0 03                  SHL EAX,0x3
0062F3D7  8B 90 30 15 7D 00         MOV EDX,dword ptr [EAX + 0x7d1530]
0062F3DD  8B 80 34 15 7D 00         MOV EAX,dword ptr [EAX + 0x7d1534]
0062F3E3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062F3E6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
switchD_0062f3c8::default:
0062F3E9  C7 45 FC 80 14 7D 00      MOV dword ptr [EBP + -0x4],0x7d1480
LAB_0062f3f0:
0062F3F0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062F3F3  85 C0                     TEST EAX,EAX
0062F3F5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0062F3F8  0F 85 94 00 00 00         JNZ 0x0062f492
0062F3FE  83 C8 FF                  OR EAX,0xffffffff
0062F401  5F                        POP EDI
0062F402  5E                        POP ESI
0062F403  8B E5                     MOV ESP,EBP
0062F405  5D                        POP EBP
0062F406  C2 10 00                  RET 0x10
switchD_0062f3c8::caseD_2:
0062F409  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062F40C  C7 45 FC A8 14 7D 00      MOV dword ptr [EBP + -0x4],0x7d14a8
0062F413  8B 01                     MOV EAX,dword ptr [ECX]
0062F415  C1 E0 03                  SHL EAX,0x3
0062F418  8B 90 30 15 7D 00         MOV EDX,dword ptr [EAX + 0x7d1530]
0062F41E  8B 80 34 15 7D 00         MOV EAX,dword ptr [EAX + 0x7d1534]
0062F424  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062F427  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0062F42A  EB C4                     JMP 0x0062f3f0
switchD_0062f3c8::caseD_3:
0062F42C  B8 0F 00 00 00            MOV EAX,0xf
0062F431  C7 45 FC D0 14 7D 00      MOV dword ptr [EBP + -0x4],0x7d14d0
0062F438  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062F43B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0062F43E  EB B0                     JMP 0x0062f3f0
switchD_0062f3c8::caseD_4:
0062F440  C7 45 FC 14 15 7D 00      MOV dword ptr [EBP + -0x4],0x7d1514
0062F447  EB 07                     JMP 0x0062f450
switchD_0062f3c8::caseD_5:
0062F449  C7 45 FC F8 14 7D 00      MOV dword ptr [EBP + -0x4],0x7d14f8
LAB_0062f450:
0062F450  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062F453  8B 01                     MOV EAX,dword ptr [ECX]
0062F455  C1 E0 03                  SHL EAX,0x3
0062F458  8B 90 80 15 7D 00         MOV EDX,dword ptr [EAX + 0x7d1580]
0062F45E  8B 80 84 15 7D 00         MOV EAX,dword ptr [EAX + 0x7d1584]
0062F464  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062F467  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0062F46A  EB 84                     JMP 0x0062f3f0
switchD_0062f3c8::caseD_6:
0062F46C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0062F46F  C7 45 FC D0 14 7D 00      MOV dword ptr [EBP + -0x4],0x7d14d0
0062F476  8B 01                     MOV EAX,dword ptr [ECX]
0062F478  C1 E0 03                  SHL EAX,0x3
0062F47B  8B 90 80 15 7D 00         MOV EDX,dword ptr [EAX + 0x7d1580]
0062F481  8B 80 84 15 7D 00         MOV EAX,dword ptr [EAX + 0x7d1584]
0062F487  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0062F48A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0062F48D  E9 5E FF FF FF            JMP 0x0062f3f0
LAB_0062f492:
0062F492  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0062F498  8D 45 AC                  LEA EAX,[EBP + -0x54]
0062F49B  8D 55 A8                  LEA EDX,[EBP + -0x58]
0062F49E  6A 00                     PUSH 0x0
0062F4A0  50                        PUSH EAX
0062F4A1  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
0062F4A4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062F4AA  E8 41 E3 0F 00            CALL 0x0072d7f0
0062F4AF  8B F0                     MOV ESI,EAX
0062F4B1  83 C4 08                  ADD ESP,0x8
0062F4B4  85 F6                     TEST ESI,ESI
0062F4B6  0F 85 F3 00 00 00         JNZ 0x0062f5af
0062F4BC  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
0062F4C2  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0062F4C5  6A 11                     PUSH 0x11
0062F4C7  68 8C 00 00 00            PUSH 0x8c
0062F4CC  68 B4 00 00 00            PUSH 0xb4
0062F4D1  50                        PUSH EAX
0062F4D2  6A 45                     PUSH 0x45
0062F4D4  6A 5A                     PUSH 0x5a
0062F4D6  51                        PUSH ECX
0062F4D7  8B CF                     MOV ECX,EDI
0062F4D9  E8 9D 5E DD FF            CALL 0x0040537b
0062F4DE  85 C0                     TEST EAX,EAX
0062F4E0  74 25                     JZ 0x0062f507
0062F4E2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0062F4E8  68 7B 01 00 00            PUSH 0x17b
0062F4ED  68 98 17 7D 00            PUSH 0x7d1798
0062F4F2  52                        PUSH EDX
0062F4F3  6A FF                     PUSH -0x1
0062F4F5  E8 46 69 07 00            CALL 0x006a5e40
0062F4FA  B8 FF FF 00 00            MOV EAX,0xffff
0062F4FF  5F                        POP EDI
0062F500  5E                        POP ESI
0062F501  8B E5                     MOV ESP,EBP
0062F503  5D                        POP EBP
0062F504  C2 10 00                  RET 0x10
LAB_0062f507:
0062F507  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0062F50A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062F50D  6A 1D                     PUSH 0x1d
0062F50F  8B 06                     MOV EAX,dword ptr [ESI]
0062F511  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
0062F514  A1 74 67 80 00            MOV EAX,[0x00806774]
0062F519  52                        PUSH EDX
0062F51A  50                        PUSH EAX
0062F51B  6A 0E                     PUSH 0xe
0062F51D  8B CF                     MOV ECX,EDI
0062F51F  E8 5F 4C DD FF            CALL 0x00404183
0062F524  85 C0                     TEST EAX,EAX
0062F526  0F 85 C1 00 00 00         JNZ 0x0062f5ed
0062F52C  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0062F52F  51                        PUSH ECX
0062F530  6A 0E                     PUSH 0xe
0062F532  8B CF                     MOV ECX,EDI
0062F534  E8 2B 1B DD FF            CALL 0x00401064
0062F539  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062F53C  8B CF                     MOV ECX,EDI
0062F53E  99                        CDQ
0062F53F  2B C2                     SUB EAX,EDX
0062F541  D1 F8                     SAR EAX,0x1
0062F543  83 E8 0E                  SUB EAX,0xe
0062F546  50                        PUSH EAX
0062F547  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0062F54A  99                        CDQ
0062F54B  2B C2                     SUB EAX,EDX
0062F54D  D1 F8                     SAR EAX,0x1
0062F54F  50                        PUSH EAX
0062F550  E8 6F 2E DD FF            CALL 0x004023c4
0062F555  DB 46 14                  FILD dword ptr [ESI + 0x14]
0062F558  51                        PUSH ECX
0062F559  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0062F55F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0062F565  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0062F56B  D9 1C 24                  FSTP float ptr [ESP]
0062F56E  DB 46 10                  FILD dword ptr [ESI + 0x10]
0062F571  51                        PUSH ECX
0062F572  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0062F578  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0062F57E  D9 1C 24                  FSTP float ptr [ESP]
0062F581  DB 46 0C                  FILD dword ptr [ESI + 0xc]
0062F584  51                        PUSH ECX
0062F585  8B CF                     MOV ECX,EDI
0062F587  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0062F58D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0062F593  D9 1C 24                  FSTP float ptr [ESP]
0062F596  E8 3E 50 DD FF            CALL 0x004045d9
0062F59B  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0062F59E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0062F5A1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0062F5A7  5F                        POP EDI
0062F5A8  5E                        POP ESI
0062F5A9  8B E5                     MOV ESP,EBP
0062F5AB  5D                        POP EBP
0062F5AC  C2 10 00                  RET 0x10
LAB_0062f5af:
0062F5AF  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0062F5B2  68 FC 17 7D 00            PUSH 0x7d17fc
0062F5B7  68 CC 4C 7A 00            PUSH 0x7a4ccc
0062F5BC  56                        PUSH ESI
0062F5BD  6A 00                     PUSH 0x0
0062F5BF  68 89 01 00 00            PUSH 0x189
0062F5C4  68 98 17 7D 00            PUSH 0x7d1798
0062F5C9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062F5CE  E8 FD DE 07 00            CALL 0x006ad4d0
0062F5D3  83 C4 18                  ADD ESP,0x18
0062F5D6  85 C0                     TEST EAX,EAX
0062F5D8  74 01                     JZ 0x0062f5db
0062F5DA  CC                        INT3
LAB_0062f5db:
0062F5DB  68 8B 01 00 00            PUSH 0x18b
0062F5E0  68 98 17 7D 00            PUSH 0x7d1798
0062F5E5  6A 00                     PUSH 0x0
0062F5E7  56                        PUSH ESI
0062F5E8  E8 53 68 07 00            CALL 0x006a5e40
LAB_0062f5ed:
0062F5ED  5F                        POP EDI
0062F5EE  B8 FF FF 00 00            MOV EAX,0xffff
0062F5F3  5E                        POP ESI
0062F5F4  8B E5                     MOV ESP,EBP
0062F5F6  5D                        POP EBP
0062F5F7  C2 10 00                  RET 0x10
