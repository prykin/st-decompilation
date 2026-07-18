FUN_007116f0:
007116F0  55                        PUSH EBP
007116F1  8B EC                     MOV EBP,ESP
007116F3  83 EC 48                  SUB ESP,0x48
007116F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007116F9  53                        PUSH EBX
007116FA  56                        PUSH ESI
007116FB  57                        PUSH EDI
007116FC  85 C0                     TEST EAX,EAX
007116FE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00711701  75 0B                     JNZ 0x0071170e
00711703  33 C0                     XOR EAX,EAX
00711705  5F                        POP EDI
00711706  5E                        POP ESI
00711707  5B                        POP EBX
00711708  8B E5                     MOV ESP,EBP
0071170A  5D                        POP EBP
0071170B  C2 08 00                  RET 0x8
LAB_0071170e:
0071170E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00711713  8D 55 BC                  LEA EDX,[EBP + -0x44]
00711716  8D 4D B8                  LEA ECX,[EBP + -0x48]
00711719  6A 00                     PUSH 0x0
0071171B  52                        PUSH EDX
0071171C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0071171F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00711725  E8 C6 C0 01 00            CALL 0x0072d7f0
0071172A  8B F0                     MOV ESI,EAX
0071172C  83 C4 08                  ADD ESP,0x8
0071172F  85 F6                     TEST ESI,ESI
00711731  0F 85 FC 00 00 00         JNZ 0x00711833
00711737  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0071173A  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
00711740  85 C0                     TEST EAX,EAX
00711742  74 23                     JZ 0x00711767
00711744  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
0071174A  85 C0                     TEST EAX,EAX
0071174C  74 19                     JZ 0x00711767
0071174E  8B 8E AC 00 00 00         MOV ECX,dword ptr [ESI + 0xac]
00711754  8B 90 AC 00 00 00         MOV EDX,dword ptr [EAX + 0xac]
0071175A  3B CA                     CMP ECX,EDX
0071175C  74 09                     JZ 0x00711767
0071175E  56                        PUSH ESI
0071175F  E8 2C F0 FF FF            CALL 0x00710790
00711764  83 C4 04                  ADD ESP,0x4
LAB_00711767:
00711767  8B 96 9A 00 00 00         MOV EDX,dword ptr [ESI + 0x9a]
0071176D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00711770  33 DB                     XOR EBX,EBX
00711772  0F BF 0A                  MOVSX ECX,word ptr [EDX]
00711775  3B C1                     CMP EAX,ECX
00711777  0F 9D C3                  SETGE BL
0071177A  4B                        DEC EBX
0071177B  23 D8                     AND EBX,EAX
0071177D  8B 46 72                  MOV EAX,dword ptr [ESI + 0x72]
00711780  85 C0                     TEST EAX,EAX
00711782  74 07                     JZ 0x0071178b
00711784  8B 46 76                  MOV EAX,dword ptr [ESI + 0x76]
00711787  85 C0                     TEST EAX,EAX
00711789  75 18                     JNZ 0x007117a3
LAB_0071178b:
0071178B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00711791  68 5B 06 00 00            PUSH 0x65b
00711796  68 90 01 7F 00            PUSH 0x7f0190
0071179B  52                        PUSH EDX
0071179C  6A CC                     PUSH -0x34
0071179E  E8 9D 46 F9 FF            CALL 0x006a5e40
LAB_007117a3:
007117A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007117A6  8B CE                     MOV ECX,ESI
007117A8  50                        PUSH EAX
007117A9  E8 02 F8 FF FF            CALL 0x00710fb0
007117AE  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
007117B4  25 FF FF 00 00            AND EAX,0xffff
007117B9  8A 51 42                  MOV DL,byte ptr [ECX + 0x42]
007117BC  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
007117BF  D1 E7                     SHL EDI,0x1
007117C1  52                        PUSH EDX
007117C2  0F BF 44 0F 6C            MOVSX EAX,word ptr [EDI + ECX*0x1 + 0x6c]
007117C7  0F BF 54 0F 6A            MOVSX EDX,word ptr [EDI + ECX*0x1 + 0x6a]
007117CC  50                        PUSH EAX
007117CD  52                        PUSH EDX
007117CE  0F BF 44 0F 68            MOVSX EAX,word ptr [EDI + ECX*0x1 + 0x68]
007117D3  0F BF 4C 0F 66            MOVSX ECX,word ptr [EDI + ECX*0x1 + 0x66]
007117D8  8B 54 9E 04               MOV EDX,dword ptr [ESI + EBX*0x4 + 0x4]
007117DC  50                        PUSH EAX
007117DD  51                        PUSH ECX
007117DE  52                        PUSH EDX
007117DF  E8 BC 37 FA FF            CALL 0x006b4fa0
007117E4  8B 4E 64                  MOV ECX,dword ptr [ESI + 0x64]
007117E7  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
007117EA  50                        PUSH EAX
007117EB  8B 44 9E 04               MOV EAX,dword ptr [ESI + EBX*0x4 + 0x4]
007117EF  8B 5E 54                  MOV EBX,dword ptr [ESI + 0x54]
007117F2  50                        PUSH EAX
007117F3  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
007117F6  03 CB                     ADD ECX,EBX
007117F8  03 D0                     ADD EDX,EAX
007117FA  8B 46 76                  MOV EAX,dword ptr [ESI + 0x76]
007117FD  51                        PUSH ECX
007117FE  8B 4E 72                  MOV ECX,dword ptr [ESI + 0x72]
00711801  52                        PUSH EDX
00711802  50                        PUSH EAX
00711803  51                        PUSH ECX
00711804  E8 07 39 FA FF            CALL 0x006b5110
00711809  8B 96 9A 00 00 00         MOV EDX,dword ptr [ESI + 0x9a]
0071180F  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
00711812  0F BF 44 3A 6A            MOVSX EAX,word ptr [EDX + EDI*0x1 + 0x6a]
00711817  03 46 58                  ADD EAX,dword ptr [ESI + 0x58]
0071181A  03 C8                     ADD ECX,EAX
0071181C  33 C0                     XOR EAX,EAX
0071181E  89 4E 50                  MOV dword ptr [ESI + 0x50],ECX
00711821  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00711824  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071182A  5F                        POP EDI
0071182B  5E                        POP ESI
0071182C  5B                        POP EBX
0071182D  8B E5                     MOV ESP,EBP
0071182F  5D                        POP EBP
00711830  C2 08 00                  RET 0x8
LAB_00711833:
00711833  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00711836  68 78 02 7F 00            PUSH 0x7f0278
0071183B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00711840  56                        PUSH ESI
00711841  6A 00                     PUSH 0x0
00711843  68 66 06 00 00            PUSH 0x666
00711848  68 90 01 7F 00            PUSH 0x7f0190
0071184D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00711853  E8 78 BC F9 FF            CALL 0x006ad4d0
00711858  83 C4 18                  ADD ESP,0x18
0071185B  85 C0                     TEST EAX,EAX
0071185D  74 01                     JZ 0x00711860
0071185F  CC                        INT3
LAB_00711860:
00711860  68 68 06 00 00            PUSH 0x668
00711865  68 90 01 7F 00            PUSH 0x7f0190
0071186A  6A 00                     PUSH 0x0
0071186C  56                        PUSH ESI
0071186D  E8 CE 45 F9 FF            CALL 0x006a5e40
00711872  8B C6                     MOV EAX,ESI
00711874  5F                        POP EDI
00711875  5E                        POP ESI
00711876  5B                        POP EBX
00711877  8B E5                     MOV ESP,EBP
00711879  5D                        POP EBP
0071187A  C2 08 00                  RET 0x8
