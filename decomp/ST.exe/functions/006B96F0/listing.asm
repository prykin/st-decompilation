FUN_006b96f0:
006B96F0  55                        PUSH EBP
006B96F1  8B EC                     MOV EBP,ESP
006B96F3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B96F6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B96F9  53                        PUSH EBX
006B96FA  56                        PUSH ESI
006B96FB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B96FE  57                        PUSH EDI
006B96FF  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B9702  50                        PUSH EAX
006B9703  6A 00                     PUSH 0x0
006B9705  6A 00                     PUSH 0x0
006B9707  68 E0 94 6B 00            PUSH 0x6b94e0
006B970C  51                        PUSH ECX
006B970D  57                        PUSH EDI
006B970E  56                        PUSH ESI
006B970F  E8 1C 8C FF FF            CALL 0x006b2330
006B9714  8B D8                     MOV EBX,EAX
006B9716  85 DB                     TEST EBX,EBX
006B9718  75 4C                     JNZ 0x006b9766
006B971A  8B 06                     MOV EAX,dword ptr [ESI]
006B971C  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B9723  74 0C                     JZ 0x006b9731
006B9725  05 F0 04 00 00            ADD EAX,0x4f0
006B972A  50                        PUSH EAX
006B972B  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b9731:
006B9731  8B 17                     MOV EDX,dword ptr [EDI]
006B9733  8B 86 B0 01 00 00         MOV EAX,dword ptr [ESI + 0x1b0]
006B9739  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B973C  8B 04 90                  MOV EAX,dword ptr [EAX + EDX*0x4]
006B973F  85 C9                     TEST ECX,ECX
006B9741  7F 05                     JG 0x006b9748
006B9743  B9 01 00 00 00            MOV ECX,0x1
LAB_006b9748:
006B9748  89 88 C8 00 00 00         MOV dword ptr [EAX + 0xc8],ECX
006B974E  8B 36                     MOV ESI,dword ptr [ESI]
006B9750  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B9757  74 0D                     JZ 0x006b9766
006B9759  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B975F  56                        PUSH ESI
006B9760  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b9766:
006B9766  5F                        POP EDI
006B9767  8B C3                     MOV EAX,EBX
006B9769  5E                        POP ESI
006B976A  5B                        POP EBX
006B976B  5D                        POP EBP
006B976C  C2 14 00                  RET 0x14
