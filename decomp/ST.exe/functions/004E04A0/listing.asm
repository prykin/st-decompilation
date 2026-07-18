FUN_004e04a0:
004E04A0  55                        PUSH EBP
004E04A1  8B EC                     MOV EBP,ESP
004E04A3  83 EC 08                  SUB ESP,0x8
004E04A6  53                        PUSH EBX
004E04A7  56                        PUSH ESI
004E04A8  8B F1                     MOV ESI,ECX
004E04AA  57                        PUSH EDI
004E04AB  33 FF                     XOR EDI,EDI
004E04AD  33 DB                     XOR EBX,EBX
004E04AF  8B 8E AC 05 00 00         MOV ECX,dword ptr [ESI + 0x5ac]
004E04B5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004E04B8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004E04BB  8D 41 C8                  LEA EAX,[ECX + -0x38]
004E04BE  83 F8 28                  CMP EAX,0x28
004E04C1  0F 87 13 01 00 00         JA 0x004e05da
004E04C7  33 D2                     XOR EDX,EDX
004E04C9  8A 90 D8 06 4E 00         MOV DL,byte ptr [EAX + 0x4e06d8]
switchD_004e04cf::switchD:
004E04CF  FF 24 95 C8 06 4E 00      JMP dword ptr [EDX*0x4 + 0x4e06c8]
switchD_004e04cf::caseD_60:
004E04D6  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
004E04DC  83 F8 03                  CMP EAX,0x3
004E04DF  0F 87 F5 00 00 00         JA 0x004e05da
switchD_004e04e5::switchD:
004E04E5  FF 24 85 04 07 4E 00      JMP dword ptr [EAX*0x4 + 0x4e0704]
switchD_004e04e5::caseD_2:
004E04EC  C7 45 FC E8 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf9e8
004E04F3  E9 E2 00 00 00            JMP 0x004e05da
switchD_004e04e5::caseD_1:
004E04F8  C7 45 FC D8 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf9d8
004E04FF  E9 D6 00 00 00            JMP 0x004e05da
switchD_004e04cf::caseD_3b:
004E0504  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
004E050A  83 F8 03                  CMP EAX,0x3
004E050D  0F 87 C7 00 00 00         JA 0x004e05da
switchD_004e0513::switchD:
004E0513  FF 24 85 14 07 4E 00      JMP dword ptr [EAX*0x4 + 0x4e0714]
switchD_004e0513::caseD_2:
004E051A  8B 86 DC 04 00 00         MOV EAX,dword ptr [ESI + 0x4dc]
004E0520  2D DC 00 00 00            SUB EAX,0xdc
004E0525  74 22                     JZ 0x004e0549
004E0527  48                        DEC EAX
004E0528  74 13                     JZ 0x004e053d
004E052A  48                        DEC EAX
004E052B  0F 85 A9 00 00 00         JNZ 0x004e05da
004E0531  C7 45 FC C8 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf9c8
004E0538  E9 9D 00 00 00            JMP 0x004e05da
LAB_004e053d:
004E053D  C7 45 FC B8 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf9b8
004E0544  E9 91 00 00 00            JMP 0x004e05da
LAB_004e0549:
004E0549  C7 45 FC A8 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf9a8
004E0550  E9 85 00 00 00            JMP 0x004e05da
switchD_004e0513::caseD_1:
004E0555  C7 45 FC 98 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf998
004E055C  EB 7C                     JMP 0x004e05da
switchD_004e04cf::caseD_38:
004E055E  8B 96 E8 04 00 00         MOV EDX,dword ptr [ESI + 0x4e8]
004E0564  83 FA 03                  CMP EDX,0x3
004E0567  77 71                     JA 0x004e05da
switchD_004e0569::switchD:
004E0569  FF 24 95 24 07 4E 00      JMP dword ptr [EDX*0x4 + 0x4e0724]
switchD_004e04e5::caseD_0:
004E0570  6A 0B                     PUSH 0xb
004E0572  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004E0578  E8 E7 3C F2 FF            CALL 0x00404264
004E057D  EB 5B                     JMP 0x004e05da
switchD_004e0569::caseD_1:
004E057F  83 F9 5E                  CMP ECX,0x5e
004E0582  75 4F                     JNZ 0x004e05d3
004E0584  C7 45 FC 88 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf988
004E058B  EB 4D                     JMP 0x004e05da
switchD_004e0569::caseD_2:
004E058D  83 F8 26                  CMP EAX,0x26
004E0590  77 48                     JA 0x004e05da
004E0592  33 C9                     XOR ECX,ECX
004E0594  8A 88 48 07 4E 00         MOV CL,byte ptr [EAX + 0x4e0748]
switchD_004e059a::switchD:
004E059A  FF 24 8D 34 07 4E 00      JMP dword ptr [ECX*0x4 + 0x4e0734]
switchD_004e059a::caseD_38:
004E05A1  C7 45 FC 78 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf978
004E05A8  EB 30                     JMP 0x004e05da
switchD_004e059a::caseD_5e:
004E05AA  C7 45 FC 64 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf964
004E05B1  EB 27                     JMP 0x004e05da
switchD_004e059a::caseD_39:
004E05B3  C7 45 FC 54 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf954
004E05BA  EB 1E                     JMP 0x004e05da
switchD_004e059a::caseD_4f:
004E05BC  C7 45 FC 44 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf944
004E05C3  EB 15                     JMP 0x004e05da
switchD_004e0569::caseD_3:
004E05C5  83 F9 5E                  CMP ECX,0x5e
004E05C8  75 09                     JNZ 0x004e05d3
004E05CA  C7 45 FC 88 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf988
004E05D1  EB 07                     JMP 0x004e05da
LAB_004e05d3:
004E05D3  C7 45 FC 34 F9 7B 00      MOV dword ptr [EBP + -0x4],0x7bf934
switchD_004e04cf::caseD_3a:
004E05DA  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
004E05E0  85 C0                     TEST EAX,EAX
004E05E2  0F 84 D4 00 00 00         JZ 0x004e06bc
004E05E8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004E05EB  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004E05F0  6A 1D                     PUSH 0x1d
004E05F2  52                        PUSH EDX
004E05F3  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004E05F9  50                        PUSH EAX
004E05FA  6A 0B                     PUSH 0xb
004E05FC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004E05FF  E8 7F 3B F2 FF            CALL 0x00404183
004E0604  85 C0                     TEST EAX,EAX
004E0606  74 17                     JZ 0x004e061f
004E0608  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004E060E  68 C3 00 00 00            PUSH 0xc3
004E0613  68 10 F9 7B 00            PUSH 0x7bf910
004E0618  51                        PUSH ECX
004E0619  50                        PUSH EAX
004E061A  E8 21 58 1C 00            CALL 0x006a5e40
LAB_004e061f:
004E061F  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
004E0625  48                        DEC EAX
004E0626  74 53                     JZ 0x004e067b
004E0628  48                        DEC EAX
004E0629  74 16                     JZ 0x004e0641
004E062B  48                        DEC EAX
004E062C  75 5E                     JNZ 0x004e068c
004E062E  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004E0634  8B 82 8C 01 00 00         MOV EAX,dword ptr [EDX + 0x18c]
004E063A  8B 38                     MOV EDI,dword ptr [EAX]
004E063C  4F                        DEC EDI
004E063D  33 DB                     XOR EBX,EBX
004E063F  EB 4B                     JMP 0x004e068c
LAB_004e0641:
004E0641  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E0647  83 F8 3B                  CMP EAX,0x3b
004E064A  74 1D                     JZ 0x004e0669
004E064C  83 F8 60                  CMP EAX,0x60
004E064F  74 18                     JZ 0x004e0669
004E0651  83 F8 52                  CMP EAX,0x52
004E0654  74 13                     JZ 0x004e0669
004E0656  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004E065C  8B 91 8C 01 00 00         MOV EDX,dword ptr [ECX + 0x18c]
004E0662  8B 3A                     MOV EDI,dword ptr [EDX]
004E0664  4F                        DEC EDI
004E0665  33 DB                     XOR EBX,EBX
004E0667  EB 23                     JMP 0x004e068c
LAB_004e0669:
004E0669  8B 86 F5 01 00 00         MOV EAX,dword ptr [ESI + 0x1f5]
004E066F  33 FF                     XOR EDI,EDI
004E0671  8B 88 8C 01 00 00         MOV ECX,dword ptr [EAX + 0x18c]
004E0677  8B 19                     MOV EBX,dword ptr [ECX]
004E0679  EB 10                     JMP 0x004e068b
LAB_004e067b:
004E067B  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004E0681  33 FF                     XOR EDI,EDI
004E0683  8B 82 8C 01 00 00         MOV EAX,dword ptr [EDX + 0x18c]
004E0689  8B 18                     MOV EBX,dword ptr [EAX]
LAB_004e068b:
004E068B  4B                        DEC EBX
LAB_004e068c:
004E068C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
004E068F  6A 00                     PUSH 0x0
004E0691  53                        PUSH EBX
004E0692  57                        PUSH EDI
004E0693  6A 0B                     PUSH 0xb
004E0695  8B CE                     MOV ECX,ESI
004E0697  E8 1E 18 F2 FF            CALL 0x00401eba
004E069C  57                        PUSH EDI
004E069D  6A 0B                     PUSH 0xb
004E069F  8B CE                     MOV ECX,ESI
004E06A1  E8 BE 09 F2 FF            CALL 0x00401064
004E06A6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E06AC  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004E06B2  8B CE                     MOV ECX,ESI
004E06B4  52                        PUSH EDX
004E06B5  6A 0B                     PUSH 0xb
004E06B7  E8 84 4B F2 FF            CALL 0x00405240
LAB_004e06bc:
004E06BC  5F                        POP EDI
004E06BD  5E                        POP ESI
004E06BE  33 C0                     XOR EAX,EAX
004E06C0  5B                        POP EBX
004E06C1  8B E5                     MOV ESP,EBP
004E06C3  5D                        POP EBP
004E06C4  C3                        RET
