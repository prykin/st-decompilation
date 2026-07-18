FUN_00636060:
00636060  55                        PUSH EBP
00636061  8B EC                     MOV EBP,ESP
00636063  51                        PUSH ECX
00636064  56                        PUSH ESI
00636065  8B F1                     MOV ESI,ECX
00636067  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0063606E  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
00636071  84 C0                     TEST AL,AL
00636073  74 07                     JZ 0x0063607c
00636075  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_0063607c:
0063607C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063607F  53                        PUSH EBX
00636080  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00636083  57                        PUSH EDI
00636084  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00636087  8B CE                     MOV ECX,ESI
00636089  57                        PUSH EDI
0063608A  53                        PUSH EBX
0063608B  50                        PUSH EAX
0063608C  E8 49 E4 DC FF            CALL 0x004044da
00636091  8B 4E 11                  MOV ECX,dword ptr [ESI + 0x11]
00636094  88 46 04                  MOV byte ptr [ESI + 0x4],AL
00636097  83 F9 04                  CMP ECX,0x4
0063609A  77 3B                     JA 0x006360d7
switchD_0063609c::switchD:
0063609C  FF 24 8D 14 61 63 00      JMP dword ptr [ECX*0x4 + 0x636114]
switchD_0063609c::caseD_0:
006360A3  8B 96 AD 00 00 00         MOV EDX,dword ptr [ESI + 0xad]
006360A9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006360AC  03 D7                     ADD EDX,EDI
006360AE  89 8E 95 00 00 00         MOV dword ptr [ESI + 0x95],ECX
006360B4  89 9E 99 00 00 00         MOV dword ptr [ESI + 0x99],EBX
006360BA  89 96 9D 00 00 00         MOV dword ptr [ESI + 0x9d],EDX
006360C0  EB 15                     JMP 0x006360d7
switchD_0063609c::caseD_3:
006360C2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006360C5  89 9E 91 00 00 00         MOV dword ptr [ESI + 0x91],EBX
006360CB  89 8E 8D 00 00 00         MOV dword ptr [ESI + 0x8d],ECX
006360D1  89 BE 95 00 00 00         MOV dword ptr [ESI + 0x95],EDI
switchD_0063609c::default:
006360D7  5F                        POP EDI
006360D8  5B                        POP EBX
006360D9  84 C0                     TEST AL,AL
006360DB  74 1F                     JZ 0x006360fc
006360DD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006360E0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006360E3  52                        PUSH EDX
006360E4  50                        PUSH EAX
006360E5  8B CE                     MOV ECX,ESI
006360E7  E8 94 C0 DC FF            CALL 0x00402180
006360EC  6A 01                     PUSH 0x1
006360EE  8B CE                     MOV ECX,ESI
006360F0  E8 E7 DC DC FF            CALL 0x00403ddc
006360F5  5E                        POP ESI
006360F6  8B E5                     MOV ESP,EBP
006360F8  5D                        POP EBP
006360F9  C2 14 00                  RET 0x14
LAB_006360fc:
006360FC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006360FF  85 C0                     TEST EAX,EAX
00636101  74 07                     JZ 0x0063610a
00636103  8B CE                     MOV ECX,ESI
00636105  E8 5B BD DC FF            CALL 0x00401e65
LAB_0063610a:
0063610A  5E                        POP ESI
0063610B  8B E5                     MOV ESP,EBP
0063610D  5D                        POP EBP
0063610E  C2 14 00                  RET 0x14
