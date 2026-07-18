HelpPanelTy::SetPanel:
00511FA0  55                        PUSH EBP
00511FA1  8B EC                     MOV EBP,ESP
00511FA3  83 EC 48                  SUB ESP,0x48
00511FA6  8A 81 A0 01 00 00         MOV AL,byte ptr [ECX + 0x1a0]
00511FAC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00511FAF  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
00511FB2  56                        PUSH ESI
00511FB3  3A C1                     CMP AL,CL
00511FB5  75 09                     JNZ 0x00511fc0
00511FB7  33 C0                     XOR EAX,EAX
00511FB9  5E                        POP ESI
00511FBA  8B E5                     MOV ESP,EBP
00511FBC  5D                        POP EBP
00511FBD  C2 04 00                  RET 0x4
LAB_00511fc0:
00511FC0  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00511FC6  8D 45 BC                  LEA EAX,[EBP + -0x44]
00511FC9  8D 55 B8                  LEA EDX,[EBP + -0x48]
00511FCC  6A 00                     PUSH 0x0
00511FCE  50                        PUSH EAX
00511FCF  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00511FD2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00511FD8  E8 13 B8 21 00            CALL 0x0072d7f0
00511FDD  8B F0                     MOV ESI,EAX
00511FDF  83 C4 08                  ADD ESP,0x8
00511FE2  85 F6                     TEST ESI,ESI
00511FE4  0F 85 35 01 00 00         JNZ 0x0051211f
00511FEA  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00511FED  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00511FF0  84 C0                     TEST AL,AL
00511FF2  88 86 A0 01 00 00         MOV byte ptr [ESI + 0x1a0],AL
00511FF8  0F 84 E9 00 00 00         JZ 0x005120e7
00511FFE  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
00512004  85 C9                     TEST ECX,ECX
00512006  74 07                     JZ 0x0051200f
00512008  6A 00                     PUSH 0x0
0051200A  E8 64 FA EE FF            CALL 0x00401a73
LAB_0051200f:
0051200F  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
00512015  85 C9                     TEST ECX,ECX
00512017  74 07                     JZ 0x00512020
00512019  6A 00                     PUSH 0x0
0051201B  E8 53 FA EE FF            CALL 0x00401a73
LAB_00512020:
00512020  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
00512026  85 C9                     TEST ECX,ECX
00512028  74 07                     JZ 0x00512031
0051202A  6A 00                     PUSH 0x0
0051202C  E8 42 FA EE FF            CALL 0x00401a73
LAB_00512031:
00512031  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
00512037  85 C9                     TEST ECX,ECX
00512039  74 07                     JZ 0x00512042
0051203B  8B 11                     MOV EDX,dword ptr [ECX]
0051203D  6A 00                     PUSH 0x0
0051203F  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_00512042:
00512042  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
00512048  85 C9                     TEST ECX,ECX
0051204A  74 09                     JZ 0x00512055
0051204C  6A 00                     PUSH 0x0
0051204E  6A 00                     PUSH 0x0
00512050  E8 A2 2A EF FF            CALL 0x00404af7
LAB_00512055:
00512055  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
0051205B  85 C9                     TEST ECX,ECX
0051205D  74 07                     JZ 0x00512066
0051205F  8B 01                     MOV EAX,dword ptr [ECX]
00512061  6A 00                     PUSH 0x0
00512063  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_00512066:
00512066  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
0051206C  85 C9                     TEST ECX,ECX
0051206E  74 07                     JZ 0x00512077
00512070  8B 11                     MOV EDX,dword ptr [ECX]
00512072  6A 00                     PUSH 0x0
00512074  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_00512077:
00512077  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
0051207D  85 C9                     TEST ECX,ECX
0051207F  74 07                     JZ 0x00512088
00512081  8B 01                     MOV EAX,dword ptr [ECX]
00512083  6A 00                     PUSH 0x0
00512085  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_00512088:
00512088  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
0051208E  85 C9                     TEST ECX,ECX
00512090  74 07                     JZ 0x00512099
00512092  6A 00                     PUSH 0x0
00512094  E8 DA F9 EE FF            CALL 0x00401a73
LAB_00512099:
00512099  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
0051209F  85 C9                     TEST ECX,ECX
005120A1  74 07                     JZ 0x005120aa
005120A3  8B 11                     MOV EDX,dword ptr [ECX]
005120A5  6A 00                     PUSH 0x0
005120A7  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_005120aa:
005120AA  8B 0D E4 16 80 00         MOV ECX,dword ptr [0x008016e4]
005120B0  85 C9                     TEST ECX,ECX
005120B2  74 07                     JZ 0x005120bb
005120B4  6A 00                     PUSH 0x0
005120B6  E8 A4 21 EF FF            CALL 0x0040425f
LAB_005120bb:
005120BB  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
005120C1  85 C9                     TEST ECX,ECX
005120C3  74 05                     JZ 0x005120ca
005120C5  E8 66 05 EF FF            CALL 0x00402630
LAB_005120ca:
005120CA  6A 01                     PUSH 0x1
005120CC  8B CE                     MOV ECX,ESI
005120CE  E8 68 3B EF FF            CALL 0x00405c3b
005120D3  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005120D6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005120DB  B8 01 00 00 00            MOV EAX,0x1
005120E0  5E                        POP ESI
005120E1  8B E5                     MOV ESP,EBP
005120E3  5D                        POP EBP
005120E4  C2 04 00                  RET 0x4
LAB_005120e7:
005120E7  8B 0D 88 16 80 00         MOV ECX,dword ptr [0x00801688]
005120ED  85 C9                     TEST ECX,ECX
005120EF  74 11                     JZ 0x00512102
005120F1  66 83 B9 3F 02 00 00 01   CMP word ptr [ECX + 0x23f],0x1
005120F9  75 07                     JNZ 0x00512102
005120FB  6A 01                     PUSH 0x1
005120FD  E8 D0 0D EF FF            CALL 0x00402ed2
LAB_00512102:
00512102  6A 00                     PUSH 0x0
00512104  8B CE                     MOV ECX,ESI
00512106  E8 30 3B EF FF            CALL 0x00405c3b
0051210B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051210E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00512113  B8 01 00 00 00            MOV EAX,0x1
00512118  5E                        POP ESI
00512119  8B E5                     MOV ESP,EBP
0051211B  5D                        POP EBP
0051211C  C2 04 00                  RET 0x4
LAB_0051211f:
0051211F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00512122  68 9C 39 7C 00            PUSH 0x7c399c
00512127  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051212C  56                        PUSH ESI
0051212D  6A 00                     PUSH 0x0
0051212F  68 2E 01 00 00            PUSH 0x12e
00512134  68 3C 38 7C 00            PUSH 0x7c383c
00512139  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051213F  E8 8C B3 19 00            CALL 0x006ad4d0
00512144  83 C4 18                  ADD ESP,0x18
00512147  85 C0                     TEST EAX,EAX
00512149  74 01                     JZ 0x0051214c
0051214B  CC                        INT3
LAB_0051214c:
0051214C  68 2E 01 00 00            PUSH 0x12e
00512151  68 3C 38 7C 00            PUSH 0x7c383c
00512156  6A 00                     PUSH 0x0
00512158  56                        PUSH ESI
00512159  E8 E2 3C 19 00            CALL 0x006a5e40
0051215E  B8 01 00 00 00            MOV EAX,0x1
00512163  5E                        POP ESI
00512164  8B E5                     MOV ESP,EBP
00512166  5D                        POP EBP
00512167  C2 04 00                  RET 0x4
