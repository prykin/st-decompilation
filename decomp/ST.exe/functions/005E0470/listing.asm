FUN_005e0470:
005E0470  55                        PUSH EBP
005E0471  8B EC                     MOV EBP,ESP
005E0473  83 EC 48                  SUB ESP,0x48
005E0476  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E047B  53                        PUSH EBX
005E047C  56                        PUSH ESI
005E047D  57                        PUSH EDI
005E047E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E0481  33 FF                     XOR EDI,EDI
005E0483  8D 55 BC                  LEA EDX,[EBP + -0x44]
005E0486  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E0489  57                        PUSH EDI
005E048A  52                        PUSH EDX
005E048B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005E048E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E0494  E8 57 D3 14 00            CALL 0x0072d7f0
005E0499  8B F0                     MOV ESI,EAX
005E049B  83 C4 08                  ADD ESP,0x8
005E049E  3B F7                     CMP ESI,EDI
005E04A0  0F 85 CD 03 00 00         JNZ 0x005e0873
005E04A6  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005E04AB  6A 02                     PUSH 0x2
005E04AD  6A 0A                     PUSH 0xa
005E04AF  50                        PUSH EAX
005E04B0  E8 8E 18 E2 FF            CALL 0x00401d43
005E04B5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005E04B8  57                        PUSH EDI
005E04B9  57                        PUSH EDI
005E04BA  57                        PUSH EDI
005E04BB  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005E04BE  57                        PUSH EDI
005E04BF  57                        PUSH EDI
005E04C0  57                        PUSH EDI
005E04C1  6A 01                     PUSH 0x1
005E04C3  6A 02                     PUSH 0x2
005E04C5  6A 64                     PUSH 0x64
005E04C7  6A 02                     PUSH 0x2
005E04C9  51                        PUSH ECX
005E04CA  57                        PUSH EDI
005E04CB  E8 EF 28 E2 FF            CALL 0x00402dbf
005E04D0  57                        PUSH EDI
005E04D1  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005E04D4  57                        PUSH EDI
005E04D5  57                        PUSH EDI
005E04D6  57                        PUSH EDI
005E04D7  57                        PUSH EDI
005E04D8  57                        PUSH EDI
005E04D9  6A 1C                     PUSH 0x1c
005E04DB  6A 02                     PUSH 0x2
005E04DD  6A 62                     PUSH 0x62
005E04DF  6A 02                     PUSH 0x2
005E04E1  52                        PUSH EDX
005E04E2  57                        PUSH EDI
005E04E3  E8 D7 28 E2 FF            CALL 0x00402dbf
005E04E8  8B 86 88 04 00 00         MOV EAX,dword ptr [ESI + 0x488]
005E04EE  83 C4 6C                  ADD ESP,0x6c
005E04F1  3B C7                     CMP EAX,EDI
005E04F3  74 0F                     JZ 0x005e0504
005E04F5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E04F8  50                        PUSH EAX
005E04F9  E8 B2 51 10 00            CALL 0x006e56b0
005E04FE  89 BE 88 04 00 00         MOV dword ptr [ESI + 0x488],EDI
LAB_005e0504:
005E0504  8B 86 3F 06 00 00         MOV EAX,dword ptr [ESI + 0x63f]
005E050A  3B C7                     CMP EAX,EDI
005E050C  7C 16                     JL 0x005e0524
005E050E  50                        PUSH EAX
005E050F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E0514  50                        PUSH EAX
005E0515  E8 96 36 0D 00            CALL 0x006b3bb0
005E051A  C7 86 3F 06 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x63f],0xffffffff
LAB_005e0524:
005E0524  8D 8E 8C 04 00 00         LEA ECX,[ESI + 0x48c]
005E052A  E8 81 55 13 00            CALL 0x00715ab0
005E052F  8D 8E 1D 05 00 00         LEA ECX,[ESI + 0x51d]
005E0535  E8 76 55 13 00            CALL 0x00715ab0
005E053A  8D 8E AE 05 00 00         LEA ECX,[ESI + 0x5ae]
005E0540  E8 6B 55 13 00            CALL 0x00715ab0
005E0545  8B 86 43 06 00 00         MOV EAX,dword ptr [ESI + 0x643]
005E054B  3B C7                     CMP EAX,EDI
005E054D  74 06                     JZ 0x005e0555
005E054F  50                        PUSH EAX
005E0550  E8 1B 50 0D 00            CALL 0x006b5570
LAB_005e0555:
005E0555  8B 86 CD 02 00 00         MOV EAX,dword ptr [ESI + 0x2cd]
005E055B  89 BE 43 06 00 00         MOV dword ptr [ESI + 0x643],EDI
005E0561  3B C7                     CMP EAX,EDI
005E0563  74 0F                     JZ 0x005e0574
005E0565  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E0568  50                        PUSH EAX
005E0569  E8 42 51 10 00            CALL 0x006e56b0
005E056E  89 BE CD 02 00 00         MOV dword ptr [ESI + 0x2cd],EDI
LAB_005e0574:
005E0574  8B 86 84 04 00 00         MOV EAX,dword ptr [ESI + 0x484]
005E057A  3B C7                     CMP EAX,EDI
005E057C  7C 17                     JL 0x005e0595
005E057E  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E0584  50                        PUSH EAX
005E0585  51                        PUSH ECX
005E0586  E8 25 36 0D 00            CALL 0x006b3bb0
005E058B  C7 86 84 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x484],0xffffffff
LAB_005e0595:
005E0595  8D 8E D1 02 00 00         LEA ECX,[ESI + 0x2d1]
005E059B  E8 10 55 13 00            CALL 0x00715ab0
005E05A0  8D 8E 62 03 00 00         LEA ECX,[ESI + 0x362]
005E05A6  E8 05 55 13 00            CALL 0x00715ab0
005E05AB  8D 8E F3 03 00 00         LEA ECX,[ESI + 0x3f3]
005E05B1  E8 FA 54 13 00            CALL 0x00715ab0
005E05B6  8D 9E BD 02 00 00         LEA EBX,[ESI + 0x2bd]
005E05BC  BF 04 00 00 00            MOV EDI,0x4
LAB_005e05c1:
005E05C1  8B 03                     MOV EAX,dword ptr [EBX]
005E05C3  85 C0                     TEST EAX,EAX
005E05C5  7C 13                     JL 0x005e05da
005E05C7  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E05CD  50                        PUSH EAX
005E05CE  52                        PUSH EDX
005E05CF  E8 DC 35 0D 00            CALL 0x006b3bb0
005E05D4  C7 03 FF FF FF FF         MOV dword ptr [EBX],0xffffffff
LAB_005e05da:
005E05DA  83 C3 04                  ADD EBX,0x4
005E05DD  4F                        DEC EDI
005E05DE  75 E1                     JNZ 0x005e05c1
005E05E0  8B 86 B9 02 00 00         MOV EAX,dword ptr [ESI + 0x2b9]
005E05E6  85 C0                     TEST EAX,EAX
005E05E8  74 13                     JZ 0x005e05fd
005E05EA  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E05ED  50                        PUSH EAX
005E05EE  E8 BD 50 10 00            CALL 0x006e56b0
005E05F3  C7 86 B9 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2b9],0x0
LAB_005e05fd:
005E05FD  8D 9E A5 02 00 00         LEA EBX,[ESI + 0x2a5]
005E0603  BF 05 00 00 00            MOV EDI,0x5
LAB_005e0608:
005E0608  8B 03                     MOV EAX,dword ptr [EBX]
005E060A  85 C0                     TEST EAX,EAX
005E060C  7C 12                     JL 0x005e0620
005E060E  50                        PUSH EAX
005E060F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E0614  50                        PUSH EAX
005E0615  E8 96 35 0D 00            CALL 0x006b3bb0
005E061A  C7 03 FF FF FF FF         MOV dword ptr [EBX],0xffffffff
LAB_005e0620:
005E0620  83 C3 04                  ADD EBX,0x4
005E0623  4F                        DEC EDI
005E0624  75 E2                     JNZ 0x005e0608
005E0626  8D 9E 91 02 00 00         LEA EBX,[ESI + 0x291]
005E062C  BF 05 00 00 00            MOV EDI,0x5
LAB_005e0631:
005E0631  8B 03                     MOV EAX,dword ptr [EBX]
005E0633  85 C0                     TEST EAX,EAX
005E0635  74 0F                     JZ 0x005e0646
005E0637  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E063A  50                        PUSH EAX
005E063B  E8 70 50 10 00            CALL 0x006e56b0
005E0640  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
LAB_005e0646:
005E0646  83 C3 04                  ADD EBX,0x4
005E0649  4F                        DEC EDI
005E064A  75 E5                     JNZ 0x005e0631
005E064C  8B 86 4B 06 00 00         MOV EAX,dword ptr [ESI + 0x64b]
005E0652  85 C0                     TEST EAX,EAX
005E0654  74 5D                     JZ 0x005e06b3
005E0656  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E0659  33 DB                     XOR EBX,EBX
005E065B  85 C9                     TEST ECX,ECX
005E065D  76 3E                     JBE 0x005e069d
005E065F  3B D9                     CMP EBX,ECX
005E0661  73 0D                     JNC 0x005e0670
LAB_005e0663:
005E0663  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
005E0666  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E0669  0F AF FB                  IMUL EDI,EBX
005E066C  03 F9                     ADD EDI,ECX
005E066E  EB 02                     JMP 0x005e0672
LAB_005e0670:
005E0670  33 FF                     XOR EDI,EDI
LAB_005e0672:
005E0672  8B CF                     MOV ECX,EDI
005E0674  E8 37 54 13 00            CALL 0x00715ab0
005E0679  8B 8F 9A 00 00 00         MOV ECX,dword ptr [EDI + 0x9a]
005E067F  8D 87 9A 00 00 00         LEA EAX,[EDI + 0x9a]
005E0685  85 C9                     TEST ECX,ECX
005E0687  74 06                     JZ 0x005e068f
005E0689  50                        PUSH EAX
005E068A  E8 D1 A9 0C 00            CALL 0x006ab060
LAB_005e068f:
005E068F  8B 86 4B 06 00 00         MOV EAX,dword ptr [ESI + 0x64b]
005E0695  43                        INC EBX
005E0696  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005E0699  3B D9                     CMP EBX,ECX
005E069B  72 C6                     JC 0x005e0663
LAB_005e069d:
005E069D  8B 8E 4B 06 00 00         MOV ECX,dword ptr [ESI + 0x64b]
005E06A3  51                        PUSH ECX
005E06A4  E8 67 DA 0C 00            CALL 0x006ae110
005E06A9  C7 86 4B 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x64b],0x0
LAB_005e06b3:
005E06B3  8B 8E 47 06 00 00         MOV ECX,dword ptr [ESI + 0x647]
005E06B9  85 C9                     TEST ECX,ECX
005E06BB  74 48                     JZ 0x005e0705
005E06BD  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005E06C0  33 FF                     XOR EDI,EDI
005E06C2  85 C0                     TEST EAX,EAX
005E06C4  76 29                     JBE 0x005e06ef
005E06C6  3B F8                     CMP EDI,EAX
005E06C8  73 0D                     JNC 0x005e06d7
LAB_005e06ca:
005E06CA  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005E06CD  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005E06D0  0F AF C7                  IMUL EAX,EDI
005E06D3  03 C2                     ADD EAX,EDX
005E06D5  EB 02                     JMP 0x005e06d9
LAB_005e06d7:
005E06D7  33 C0                     XOR EAX,EAX
LAB_005e06d9:
005E06D9  50                        PUSH EAX
005E06DA  8B CE                     MOV ECX,ESI
005E06DC  E8 7A 4E E2 FF            CALL 0x0040555b
005E06E1  8B 8E 47 06 00 00         MOV ECX,dword ptr [ESI + 0x647]
005E06E7  47                        INC EDI
005E06E8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005E06EB  3B F8                     CMP EDI,EAX
005E06ED  72 DB                     JC 0x005e06ca
LAB_005e06ef:
005E06EF  8B 96 47 06 00 00         MOV EDX,dword ptr [ESI + 0x647]
005E06F5  52                        PUSH EDX
005E06F6  E8 15 DA 0C 00            CALL 0x006ae110
005E06FB  C7 86 47 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x647],0x0
LAB_005e0705:
005E0705  8B 8E 4F 06 00 00         MOV ECX,dword ptr [ESI + 0x64f]
005E070B  85 C9                     TEST ECX,ECX
005E070D  74 48                     JZ 0x005e0757
005E070F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005E0712  33 FF                     XOR EDI,EDI
005E0714  85 C0                     TEST EAX,EAX
005E0716  76 29                     JBE 0x005e0741
005E0718  3B F8                     CMP EDI,EAX
005E071A  73 0D                     JNC 0x005e0729
LAB_005e071c:
005E071C  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005E071F  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005E0722  0F AF C7                  IMUL EAX,EDI
005E0725  03 C2                     ADD EAX,EDX
005E0727  EB 02                     JMP 0x005e072b
LAB_005e0729:
005E0729  33 C0                     XOR EAX,EAX
LAB_005e072b:
005E072B  50                        PUSH EAX
005E072C  8B CE                     MOV ECX,ESI
005E072E  E8 28 4E E2 FF            CALL 0x0040555b
005E0733  8B 8E 4F 06 00 00         MOV ECX,dword ptr [ESI + 0x64f]
005E0739  47                        INC EDI
005E073A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005E073D  3B F8                     CMP EDI,EAX
005E073F  72 DB                     JC 0x005e071c
LAB_005e0741:
005E0741  8B 86 4F 06 00 00         MOV EAX,dword ptr [ESI + 0x64f]
005E0747  50                        PUSH EAX
005E0748  E8 C3 D9 0C 00            CALL 0x006ae110
005E074D  C7 86 4F 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x64f],0x0
LAB_005e0757:
005E0757  8D 9E 53 06 00 00         LEA EBX,[ESI + 0x653]
005E075D  BF 0B 00 00 00            MOV EDI,0xb
LAB_005e0762:
005E0762  83 3B 00                  CMP dword ptr [EBX],0x0
005E0765  74 06                     JZ 0x005e076d
005E0767  53                        PUSH EBX
005E0768  E8 F3 A8 0C 00            CALL 0x006ab060
LAB_005e076d:
005E076D  83 C3 0C                  ADD EBX,0xc
005E0770  4F                        DEC EDI
005E0771  75 EF                     JNZ 0x005e0762
005E0773  8B 86 89 00 00 00         MOV EAX,dword ptr [ESI + 0x89]
005E0779  85 C0                     TEST EAX,EAX
005E077B  74 13                     JZ 0x005e0790
005E077D  50                        PUSH EAX
005E077E  E8 DD FD 12 00            CALL 0x00710560
005E0783  83 C4 04                  ADD ESP,0x4
005E0786  C7 86 89 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x89],0x0
LAB_005e0790:
005E0790  8B 86 8D 00 00 00         MOV EAX,dword ptr [ESI + 0x8d]
005E0796  85 C0                     TEST EAX,EAX
005E0798  74 13                     JZ 0x005e07ad
005E079A  50                        PUSH EAX
005E079B  E8 C0 FD 12 00            CALL 0x00710560
005E07A0  83 C4 04                  ADD ESP,0x4
005E07A3  C7 86 8D 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x8d],0x0
LAB_005e07ad:
005E07AD  8B 4E 5D                  MOV ECX,dword ptr [ESI + 0x5d]
005E07B0  8D 46 5D                  LEA EAX,[ESI + 0x5d]
005E07B3  85 C9                     TEST ECX,ECX
005E07B5  C7 86 81 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x81],0x0
005E07BF  74 28                     JZ 0x005e07e9
005E07C1  33 C9                     XOR ECX,ECX
005E07C3  8A 8E 80 00 00 00         MOV CL,byte ptr [ESI + 0x80]
005E07C9  49                        DEC ECX
005E07CA  74 11                     JZ 0x005e07dd
005E07CC  49                        DEC ECX
005E07CD  50                        PUSH EAX
005E07CE  74 05                     JZ 0x005e07d5
005E07D0  8B 4E 70                  MOV ECX,dword ptr [ESI + 0x70]
005E07D3  EB 0F                     JMP 0x005e07e4
LAB_005e07d5:
005E07D5  8B 0D 98 67 80 00         MOV ECX,dword ptr [0x00806798]
005E07DB  EB 07                     JMP 0x005e07e4
LAB_005e07dd:
005E07DD  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005E07E3  50                        PUSH EAX
LAB_005e07e4:
005E07E4  E8 F7 18 11 00            CALL 0x006f20e0
LAB_005e07e9:
005E07E9  A1 E3 85 80 00            MOV EAX,[0x008085e3]
005E07EE  85 C0                     TEST EAX,EAX
005E07F0  74 13                     JZ 0x005e0805
005E07F2  E8 29 16 0E 00            CALL 0x006c1e20
005E07F7  B9 60 00 00 00            MOV ECX,0x60
005E07FC  33 C0                     XOR EAX,EAX
005E07FE  BF 63 84 80 00            MOV EDI,0x808463
005E0803  F3 AB                     STOSD.REP ES:EDI
LAB_005e0805:
005E0805  8B 46 74                  MOV EAX,dword ptr [ESI + 0x74]
005E0808  85 C0                     TEST EAX,EAX
005E080A  74 06                     JZ 0x005e0812
005E080C  50                        PUSH EAX
005E080D  E8 FE D8 0C 00            CALL 0x006ae110
LAB_005e0812:
005E0812  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
005E0815  C7 46 74 00 00 00 00      MOV dword ptr [ESI + 0x74],0x0
005E081C  85 C0                     TEST EAX,EAX
005E081E  74 06                     JZ 0x005e0826
005E0820  50                        PUSH EAX
005E0821  E8 EA D8 0C 00            CALL 0x006ae110
LAB_005e0826:
005E0826  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
005E0829  C7 46 78 00 00 00 00      MOV dword ptr [ESI + 0x78],0x0
005E0830  85 C0                     TEST EAX,EAX
005E0832  74 09                     JZ 0x005e083d
005E0834  50                        PUSH EAX
005E0835  E8 36 09 11 00            CALL 0x006f1170
005E083A  83 C4 04                  ADD ESP,0x4
LAB_005e083d:
005E083D  8B 46 4D                  MOV EAX,dword ptr [ESI + 0x4d]
005E0840  C7 46 70 00 00 00 00      MOV dword ptr [ESI + 0x70],0x0
005E0847  85 C0                     TEST EAX,EAX
005E0849  74 0E                     JZ 0x005e0859
005E084B  83 C6 3D                  ADD ESI,0x3d
005E084E  B9 20 76 80 00            MOV ECX,0x807620
005E0853  56                        PUSH ESI
005E0854  E8 F7 32 10 00            CALL 0x006e3b50
LAB_005e0859:
005E0859  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005E085C  C7 05 54 76 80 00 21 00 00 00  MOV dword ptr [0x00807654],0x21
005E0866  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E086C  5F                        POP EDI
005E086D  5E                        POP ESI
005E086E  5B                        POP EBX
005E086F  8B E5                     MOV ESP,EBP
005E0871  5D                        POP EBP
005E0872  C3                        RET
LAB_005e0873:
005E0873  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005E0876  68 70 DA 7C 00            PUSH 0x7cda70
005E087B  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E0880  56                        PUSH ESI
005E0881  57                        PUSH EDI
005E0882  68 2B 01 00 00            PUSH 0x12b
005E0887  68 94 D9 7C 00            PUSH 0x7cd994
005E088C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E0892  E8 39 CC 0C 00            CALL 0x006ad4d0
005E0897  83 C4 18                  ADD ESP,0x18
005E089A  85 C0                     TEST EAX,EAX
005E089C  74 01                     JZ 0x005e089f
005E089E  CC                        INT3
LAB_005e089f:
005E089F  68 2B 01 00 00            PUSH 0x12b
005E08A4  68 94 D9 7C 00            PUSH 0x7cd994
005E08A9  57                        PUSH EDI
005E08AA  56                        PUSH ESI
005E08AB  E8 90 55 0C 00            CALL 0x006a5e40
005E08B0  5F                        POP EDI
005E08B1  5E                        POP ESI
005E08B2  5B                        POP EBX
005E08B3  8B E5                     MOV ESP,EBP
005E08B5  5D                        POP EBP
005E08B6  C3                        RET
