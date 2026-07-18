FUN_00710560:
00710560  55                        PUSH EBP
00710561  8B EC                     MOV EBP,ESP
00710563  83 EC 48                  SUB ESP,0x48
00710566  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00710569  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0071056F  53                        PUSH EBX
00710570  56                        PUSH ESI
00710571  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00710574  33 DB                     XOR EBX,EBX
00710576  57                        PUSH EDI
00710577  8D 45 BC                  LEA EAX,[EBP + -0x44]
0071057A  8D 55 B8                  LEA EDX,[EBP + -0x48]
0071057D  53                        PUSH EBX
0071057E  50                        PUSH EAX
0071057F  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00710582  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00710588  E8 63 D2 01 00            CALL 0x0072d7f0
0071058D  8B F0                     MOV ESI,EAX
0071058F  83 C4 08                  ADD ESP,0x8
00710592  3B F3                     CMP ESI,EBX
00710594  0F 85 A5 01 00 00         JNZ 0x0071073f
0071059A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0071059D  3B F3                     CMP ESI,EBX
0071059F  0F 84 8B 01 00 00         JZ 0x00710730
007105A5  39 9E A0 00 00 00         CMP dword ptr [ESI + 0xa0],EBX
007105AB  0F 85 76 01 00 00         JNZ 0x00710727
007105B1  8B 86 11 01 00 00         MOV EAX,dword ptr [ESI + 0x111]
007105B7  8B 3D 78 BA 85 00         MOV EDI,dword ptr [0x0085ba78]
007105BD  3B C3                     CMP EAX,EBX
007105BF  74 03                     JZ 0x007105c4
007105C1  50                        PUSH EAX
007105C2  FF D7                     CALL EDI
LAB_007105c4:
007105C4  8B 8E 2D 01 00 00         MOV ECX,dword ptr [ESI + 0x12d]
007105CA  8D 86 2D 01 00 00         LEA EAX,[ESI + 0x12d]
007105D0  3B CB                     CMP ECX,EBX
007105D2  74 06                     JZ 0x007105da
007105D4  50                        PUSH EAX
007105D5  E8 86 AA F9 FF            CALL 0x006ab060
LAB_007105da:
007105DA  8B 86 09 01 00 00         MOV EAX,dword ptr [ESI + 0x109]
007105E0  3B C3                     CMP EAX,EBX
007105E2  74 03                     JZ 0x007105e7
007105E4  50                        PUSH EAX
007105E5  FF D7                     CALL EDI
LAB_007105e7:
007105E7  39 9E 01 01 00 00         CMP dword ptr [ESI + 0x101],EBX
007105ED  74 27                     JZ 0x00710616
007105EF  8B 86 FD 00 00 00         MOV EAX,dword ptr [ESI + 0xfd]
007105F5  3B C3                     CMP EAX,EBX
007105F7  74 0E                     JZ 0x00710607
007105F9  8B 8E 05 01 00 00         MOV ECX,dword ptr [ESI + 0x105]
007105FF  51                        PUSH ECX
00710600  50                        PUSH EAX
00710601  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
LAB_00710607:
00710607  8B 96 01 01 00 00         MOV EDX,dword ptr [ESI + 0x101]
0071060D  52                        PUSH EDX
0071060E  FF D7                     CALL EDI
00710610  89 9E 01 01 00 00         MOV dword ptr [ESI + 0x101],EBX
LAB_00710616:
00710616  39 9E 15 01 00 00         CMP dword ptr [ESI + 0x115],EBX
0071061C  74 28                     JZ 0x00710646
0071061E  8B 86 FD 00 00 00         MOV EAX,dword ptr [ESI + 0xfd]
00710624  3B C3                     CMP EAX,EBX
00710626  74 0F                     JZ 0x00710637
00710628  8B 8E 19 01 00 00         MOV ECX,dword ptr [ESI + 0x119]
0071062E  53                        PUSH EBX
0071062F  51                        PUSH ECX
00710630  50                        PUSH EAX
00710631  FF 15 94 BA 85 00         CALL dword ptr [0x0085ba94]
LAB_00710637:
00710637  8B 96 15 01 00 00         MOV EDX,dword ptr [ESI + 0x115]
0071063D  52                        PUSH EDX
0071063E  FF D7                     CALL EDI
00710640  89 9E 15 01 00 00         MOV dword ptr [ESI + 0x115],EBX
LAB_00710646:
00710646  39 9E 1D 01 00 00         CMP dword ptr [ESI + 0x11d],EBX
0071064C  74 27                     JZ 0x00710675
0071064E  8B 86 FD 00 00 00         MOV EAX,dword ptr [ESI + 0xfd]
00710654  3B C3                     CMP EAX,EBX
00710656  74 0E                     JZ 0x00710666
00710658  8B 8E 21 01 00 00         MOV ECX,dword ptr [ESI + 0x121]
0071065E  51                        PUSH ECX
0071065F  50                        PUSH EAX
00710660  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
LAB_00710666:
00710666  8B 96 1D 01 00 00         MOV EDX,dword ptr [ESI + 0x11d]
0071066C  52                        PUSH EDX
0071066D  FF D7                     CALL EDI
0071066F  89 9E 1D 01 00 00         MOV dword ptr [ESI + 0x11d],EBX
LAB_00710675:
00710675  8B 86 FD 00 00 00         MOV EAX,dword ptr [ESI + 0xfd]
0071067B  3B C3                     CMP EAX,EBX
0071067D  74 0E                     JZ 0x0071068d
0071067F  50                        PUSH EAX
00710680  53                        PUSH EBX
00710681  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
00710687  89 9E FD 00 00 00         MOV dword ptr [ESI + 0xfd],EBX
LAB_0071068d:
0071068D  8B 8E 25 01 00 00         MOV ECX,dword ptr [ESI + 0x125]
00710693  8D 86 25 01 00 00         LEA EAX,[ESI + 0x125]
00710699  3B CB                     CMP ECX,EBX
0071069B  74 06                     JZ 0x007106a3
0071069D  50                        PUSH EAX
0071069E  E8 BD A9 F9 FF            CALL 0x006ab060
LAB_007106a3:
007106A3  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
007106A9  8D 86 9A 00 00 00         LEA EAX,[ESI + 0x9a]
007106AF  66 39 19                  CMP word ptr [ECX],BX
007106B2  7E 34                     JLE 0x007106e8
007106B4  8D 7E 04                  LEA EDI,[ESI + 0x4]
LAB_007106b7:
007106B7  83 3F 00                  CMP dword ptr [EDI],0x0
007106BA  74 13                     JZ 0x007106cf
007106BC  8B 0E                     MOV ECX,dword ptr [ESI]
007106BE  57                        PUSH EDI
007106BF  85 C9                     TEST ECX,ECX
007106C1  74 07                     JZ 0x007106ca
007106C3  E8 18 1A FE FF            CALL 0x006f20e0
007106C8  EB 05                     JMP 0x007106cf
LAB_007106ca:
007106CA  E8 91 A9 F9 FF            CALL 0x006ab060
LAB_007106cf:
007106CF  8B 96 9A 00 00 00         MOV EDX,dword ptr [ESI + 0x9a]
007106D5  8D 86 9A 00 00 00         LEA EAX,[ESI + 0x9a]
007106DB  43                        INC EBX
007106DC  83 C7 04                  ADD EDI,0x4
007106DF  0F BF 0A                  MOVSX ECX,word ptr [EDX]
007106E2  3B D9                     CMP EBX,ECX
007106E4  7C D1                     JL 0x007106b7
007106E6  33 DB                     XOR EBX,EBX
LAB_007106e8:
007106E8  39 18                     CMP dword ptr [EAX],EBX
007106EA  74 13                     JZ 0x007106ff
007106EC  8B 0E                     MOV ECX,dword ptr [ESI]
007106EE  50                        PUSH EAX
007106EF  3B CB                     CMP ECX,EBX
007106F1  74 07                     JZ 0x007106fa
007106F3  E8 E8 19 FE FF            CALL 0x006f20e0
007106F8  EB 05                     JMP 0x007106ff
LAB_007106fa:
007106FA  E8 61 A9 F9 FF            CALL 0x006ab060
LAB_007106ff:
007106FF  8B 46 72                  MOV EAX,dword ptr [ESI + 0x72]
00710702  3B C3                     CMP EAX,EBX
00710704  74 0B                     JZ 0x00710711
00710706  39 5E 7A                  CMP dword ptr [ESI + 0x7a],EBX
00710709  74 06                     JZ 0x00710711
0071070B  50                        PUSH EAX
0071070C  E8 7F 57 F9 FF            CALL 0x006a5e90
LAB_00710711:
00710711  8B 86 85 01 00 00         MOV EAX,dword ptr [ESI + 0x185]
00710717  81 C6 85 01 00 00         ADD ESI,0x185
0071071D  3B C3                     CMP EAX,EBX
0071071F  74 06                     JZ 0x00710727
00710721  56                        PUSH ESI
00710722  E8 39 A9 F9 FF            CALL 0x006ab060
LAB_00710727:
00710727  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071072A  52                        PUSH EDX
0071072B  E8 60 57 F9 FF            CALL 0x006a5e90
LAB_00710730:
00710730  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00710733  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00710738  5F                        POP EDI
00710739  5E                        POP ESI
0071073A  5B                        POP EBX
0071073B  8B E5                     MOV ESP,EBP
0071073D  5D                        POP EBP
0071073E  C3                        RET
LAB_0071073f:
0071073F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00710742  68 F8 01 7F 00            PUSH 0x7f01f8
00710747  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071074C  56                        PUSH ESI
0071074D  53                        PUSH EBX
0071074E  68 00 04 00 00            PUSH 0x400
00710753  68 90 01 7F 00            PUSH 0x7f0190
00710758  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071075E  E8 6D CD F9 FF            CALL 0x006ad4d0
00710763  83 C4 18                  ADD ESP,0x18
00710766  85 C0                     TEST EAX,EAX
00710768  74 01                     JZ 0x0071076b
0071076A  CC                        INT3
LAB_0071076b:
0071076B  68 02 04 00 00            PUSH 0x402
00710770  68 90 01 7F 00            PUSH 0x7f0190
00710775  53                        PUSH EBX
00710776  56                        PUSH ESI
00710777  E8 C4 56 F9 FF            CALL 0x006a5e40
0071077C  5F                        POP EDI
0071077D  5E                        POP ESI
0071077E  5B                        POP EBX
0071077F  8B E5                     MOV ESP,EBP
00710781  5D                        POP EBP
00710782  C3                        RET
