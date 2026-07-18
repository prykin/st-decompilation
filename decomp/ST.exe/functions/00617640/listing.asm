JumpManagC::GetMessage:
00617640  55                        PUSH EBP
00617641  8B EC                     MOV EBP,ESP
00617643  83 EC 50                  SUB ESP,0x50
00617646  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0061764B  56                        PUSH ESI
0061764C  57                        PUSH EDI
0061764D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00617650  33 FF                     XOR EDI,EDI
00617652  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00617655  8D 4D B0                  LEA ECX,[EBP + -0x50]
00617658  57                        PUSH EDI
00617659  52                        PUSH EDX
0061765A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0061765D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00617663  E8 88 61 11 00            CALL 0x0072d7f0
00617668  8B F0                     MOV ESI,EAX
0061766A  83 C4 08                  ADD ESP,0x8
0061766D  3B F7                     CMP ESI,EDI
0061766F  0F 85 F7 00 00 00         JNZ 0x0061776c
00617675  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00617678  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0061767B  83 E8 02                  SUB EAX,0x2
0061767E  0F 84 9A 00 00 00         JZ 0x0061771e
00617684  48                        DEC EAX
00617685  74 4B                     JZ 0x006176d2
00617687  2D 0C 01 00 00            SUB EAX,0x10c
0061768C  0F 85 C8 00 00 00         JNZ 0x0061775a
00617692  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00617695  8D 45 F8                  LEA EAX,[EBP + -0x8]
00617698  50                        PUSH EAX
00617699  8B CE                     MOV ECX,ESI
0061769B  E8 55 9F DE FF            CALL 0x004015f5
006176A0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006176A3  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006176A6  51                        PUSH ECX
006176A7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006176AD  50                        PUSH EAX
006176AE  52                        PUSH EDX
006176AF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006176B2  E8 42 AF DE FF            CALL 0x004025f9
006176B7  8D 45 F4                  LEA EAX,[EBP + -0xc]
006176BA  50                        PUSH EAX
006176BB  E8 A0 39 09 00            CALL 0x006ab060
006176C0  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006176C3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006176C8  33 C0                     XOR EAX,EAX
006176CA  5F                        POP EDI
006176CB  5E                        POP ESI
006176CC  8B E5                     MOV ESP,EBP
006176CE  5D                        POP EBP
006176CF  C2 04 00                  RET 0x4
LAB_006176d2:
006176D2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006176D5  8B CE                     MOV ECX,ESI
006176D7  E8 6A A3 DE FF            CALL 0x00401a46
006176DC  8B 46 5E                  MOV EAX,dword ptr [ESI + 0x5e]
006176DF  3B C7                     CMP EAX,EDI
006176E1  74 09                     JZ 0x006176ec
006176E3  50                        PUSH EAX
006176E4  E8 27 6A 09 00            CALL 0x006ae110
006176E9  89 7E 5E                  MOV dword ptr [ESI + 0x5e],EDI
LAB_006176ec:
006176EC  8B 46 62                  MOV EAX,dword ptr [ESI + 0x62]
006176EF  3B C7                     CMP EAX,EDI
006176F1  74 09                     JZ 0x006176fc
006176F3  50                        PUSH EAX
006176F4  E8 17 6A 09 00            CALL 0x006ae110
006176F9  89 7E 62                  MOV dword ptr [ESI + 0x62],EDI
LAB_006176fc:
006176FC  8B 46 66                  MOV EAX,dword ptr [ESI + 0x66]
006176FF  3B C7                     CMP EAX,EDI
00617701  74 57                     JZ 0x0061775a
00617703  50                        PUSH EAX
00617704  E8 07 6A 09 00            CALL 0x006ae110
00617709  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0061770C  89 7E 66                  MOV dword ptr [ESI + 0x66],EDI
0061770F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00617714  33 C0                     XOR EAX,EAX
00617716  5F                        POP EDI
00617717  5E                        POP ESI
00617718  8B E5                     MOV ESP,EBP
0061771A  5D                        POP EBP
0061771B  C2 04 00                  RET 0x4
LAB_0061771e:
0061771E  8B 71 14                  MOV ESI,dword ptr [ECX + 0x14]
00617721  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
00617725  74 21                     JZ 0x00617748
00617727  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061772A  B9 0F 00 00 00            MOV ECX,0xf
0061772F  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00617732  8D 7A 1C                  LEA EDI,[EDX + 0x1c]
00617735  F3 A5                     MOVSD.REP ES:EDI,ESI
00617737  66 A5                     MOVSW ES:EDI,ESI
00617739  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0061773E  33 C0                     XOR EAX,EAX
00617740  5F                        POP EDI
00617741  5E                        POP ESI
00617742  8B E5                     MOV ESP,EBP
00617744  5D                        POP EBP
00617745  C2 04 00                  RET 0x4
LAB_00617748:
00617748  56                        PUSH ESI
00617749  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0061774C  8B CE                     MOV ECX,ESI
0061774E  E8 C6 D9 DE FF            CALL 0x00405119
00617753  8B CE                     MOV ECX,ESI
00617755  E8 AF D5 DE FF            CALL 0x00404d09
LAB_0061775a:
0061775A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0061775D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00617762  33 C0                     XOR EAX,EAX
00617764  5F                        POP EDI
00617765  5E                        POP ESI
00617766  8B E5                     MOV ESP,EBP
00617768  5D                        POP EBP
00617769  C2 04 00                  RET 0x4
LAB_0061776c:
0061776C  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0061776F  68 84 00 7D 00            PUSH 0x7d0084
00617774  68 CC 4C 7A 00            PUSH 0x7a4ccc
00617779  56                        PUSH ESI
0061777A  57                        PUSH EDI
0061777B  6A 4B                     PUSH 0x4b
0061777D  68 5C 00 7D 00            PUSH 0x7d005c
00617782  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00617788  E8 43 5D 09 00            CALL 0x006ad4d0
0061778D  83 C4 18                  ADD ESP,0x18
00617790  85 C0                     TEST EAX,EAX
00617792  74 01                     JZ 0x00617795
00617794  CC                        INT3
LAB_00617795:
00617795  6A 4D                     PUSH 0x4d
00617797  68 5C 00 7D 00            PUSH 0x7d005c
0061779C  57                        PUSH EDI
0061779D  56                        PUSH ESI
0061779E  E8 9D E6 08 00            CALL 0x006a5e40
006177A3  5F                        POP EDI
006177A4  B8 FF FF 00 00            MOV EAX,0xffff
006177A9  5E                        POP ESI
006177AA  8B E5                     MOV ESP,EBP
006177AC  5D                        POP EBP
006177AD  C2 04 00                  RET 0x4
