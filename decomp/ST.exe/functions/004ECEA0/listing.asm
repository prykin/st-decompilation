FUN_004ecea0:
004ECEA0  55                        PUSH EBP
004ECEA1  8B EC                     MOV EBP,ESP
004ECEA3  51                        PUSH ECX
004ECEA4  56                        PUSH ESI
004ECEA5  8B F1                     MOV ESI,ECX
004ECEA7  57                        PUSH EDI
004ECEA8  33 FF                     XOR EDI,EDI
004ECEAA  39 BE FF 05 00 00         CMP dword ptr [ESI + 0x5ff],EDI
004ECEB0  75 56                     JNZ 0x004ecf08
004ECEB2  6A 40                     PUSH 0x40
004ECEB4  E8 77 16 24 00            CALL 0x0072e530
004ECEB9  83 C4 04                  ADD ESP,0x4
004ECEBC  3B C7                     CMP EAX,EDI
004ECEBE  74 09                     JZ 0x004ecec9
004ECEC0  8B C8                     MOV ECX,EAX
004ECEC2  E8 4F 44 F1 FF            CALL 0x00401316
004ECEC7  EB 02                     JMP 0x004ececb
LAB_004ecec9:
004ECEC9  33 C0                     XOR EAX,EAX
LAB_004ececb:
004ECECB  6A 11                     PUSH 0x11
004ECECD  68 8C 00 00 00            PUSH 0x8c
004ECED2  68 B4 00 00 00            PUSH 0xb4
004ECED7  89 86 FF 05 00 00         MOV dword ptr [ESI + 0x5ff],EAX
004ECEDD  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004ECEE3  57                        PUSH EDI
004ECEE4  6A 45                     PUSH 0x45
004ECEE6  6A 5A                     PUSH 0x5a
004ECEE8  51                        PUSH ECX
004ECEE9  8B C8                     MOV ECX,EAX
004ECEEB  E8 8B 84 F1 FF            CALL 0x0040537b
004ECEF0  3B C7                     CMP EAX,EDI
004ECEF2  74 14                     JZ 0x004ecf08
004ECEF4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004ECEFA  6A 3F                     PUSH 0x3f
004ECEFC  68 70 16 7C 00            PUSH 0x7c1670
004ECF01  52                        PUSH EDX
004ECF02  50                        PUSH EAX
004ECF03  E8 38 8F 1B 00            CALL 0x006a5e40
LAB_004ecf08:
004ECF08  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004ECF0E  B9 04 00 00 00            MOV ECX,0x4
004ECF13  83 F8 06                  CMP EAX,0x6
004ECF16  0F 87 8F 00 00 00         JA 0x004ecfab
switchD_004ecf1c::switchD:
004ECF1C  FF 24 85 30 D1 4E 00      JMP dword ptr [EAX*0x4 + 0x4ed130]
switchD_004ecf1c::caseD_0:
004ECF23  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
004ECF29  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004ECF2F  3B C1                     CMP EAX,ECX
004ECF31  75 0C                     JNZ 0x004ecf3f
004ECF33  C7 86 D0 04 00 00 05 00 00 00  MOV dword ptr [ESI + 0x4d0],0x5
004ECF3D  EB 6C                     JMP 0x004ecfab
LAB_004ecf3f:
004ECF3F  83 F8 05                  CMP EAX,0x5
004ECF42  75 08                     JNZ 0x004ecf4c
switchD_004ecf1c::caseD_1:
004ECF44  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
004ECF4A  EB 5F                     JMP 0x004ecfab
LAB_004ecf4c:
004ECF4C  83 F8 01                  CMP EAX,0x1
004ECF4F  75 5A                     JNZ 0x004ecfab
004ECF51  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
004ECF57  EB 52                     JMP 0x004ecfab
switchD_004ecf1c::caseD_5:
004ECF59  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004ECF5F  48                        DEC EAX
004ECF60  3B C1                     CMP EAX,ECX
004ECF62  77 2D                     JA 0x004ecf91
switchD_004ecf64::switchD:
004ECF64  FF 24 85 4C D1 4E 00      JMP dword ptr [EAX*0x4 + 0x4ed14c]
switchD_004ecf64::caseD_1:
004ECF6B  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
004ECF75  EB 1A                     JMP 0x004ecf91
switchD_004ecf64::caseD_3:
004ECF77  89 8E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],ECX
004ECF7D  EB 12                     JMP 0x004ecf91
switchD_004ecf64::caseD_4:
004ECF7F  C7 86 D0 04 00 00 05 00 00 00  MOV dword ptr [ESI + 0x4d0],0x5
004ECF89  EB 06                     JMP 0x004ecf91
switchD_004ecf64::caseD_5:
004ECF8B  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
switchD_004ecf64::caseD_2:
004ECF91  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
004ECF97  8B 86 65 02 00 00         MOV EAX,dword ptr [ESI + 0x265]
004ECF9D  24 FD                     AND AL,0xfd
004ECF9F  89 86 65 02 00 00         MOV dword ptr [ESI + 0x265],EAX
004ECFA5  89 BE 6D 02 00 00         MOV dword ptr [ESI + 0x26d],EDI
switchD_004ecf1c::caseD_2:
004ECFAB  39 8E D0 04 00 00         CMP dword ptr [ESI + 0x4d0],ECX
004ECFB1  0F 85 65 01 00 00         JNZ 0x004ed11c
004ECFB7  A1 74 67 80 00            MOV EAX,[0x00806774]
004ECFBC  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004ECFC2  6A 1D                     PUSH 0x1d
004ECFC4  68 38 1F 7D 00            PUSH 0x7d1f38
004ECFC9  50                        PUSH EAX
004ECFCA  6A 0E                     PUSH 0xe
004ECFCC  E8 B2 71 F1 FF            CALL 0x00404183
004ECFD1  3B C7                     CMP EAX,EDI
004ECFD3  74 14                     JZ 0x004ecfe9
004ECFD5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004ECFDB  6A 58                     PUSH 0x58
004ECFDD  68 70 16 7C 00            PUSH 0x7c1670
004ECFE2  51                        PUSH ECX
004ECFE3  50                        PUSH EAX
004ECFE4  E8 57 8E 1B 00            CALL 0x006a5e40
LAB_004ecfe9:
004ECFE9  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004ECFEF  E8 9C 5A F1 FF            CALL 0x00402a90
004ECFF4  6A 0A                     PUSH 0xa
004ECFF6  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004ECFFC  E8 CB 82 F1 FF            CALL 0x004052cc
004ED001  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004ED007  50                        PUSH EAX
004ED008  E8 BF 82 F1 FF            CALL 0x004052cc
004ED00D  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004ED013  50                        PUSH EAX
004ED014  E8 27 D3 1F 00            CALL 0x006ea340
004ED019  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004ED01F  57                        PUSH EDI
004ED020  57                        PUSH EDI
004ED021  57                        PUSH EDI
004ED022  6A 0E                     PUSH 0xe
004ED024  E8 91 4E F1 FF            CALL 0x00401eba
004ED029  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004ED02F  57                        PUSH EDI
004ED030  6A 0E                     PUSH 0xe
004ED032  E8 2D 40 F1 FF            CALL 0x00401064
004ED037  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004ED03D  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004ED043  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004ED049  50                        PUSH EAX
004ED04A  6A 0E                     PUSH 0xe
004ED04C  E8 EF 81 F1 FF            CALL 0x00405240
004ED051  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004ED057  89 BE D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDI
004ED05D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004ED063  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004ED066  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004ED06C  C7 86 DC 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4dc],0x1
004ED076  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
004ED07A  C1 E0 03                  SHL EAX,0x3
004ED07D  89 96 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EDX
004ED083  51                        PUSH ECX
004ED084  8B 90 C8 AA 79 00         MOV EDX,dword ptr [EAX + 0x79aac8]
004ED08A  03 D1                     ADD EDX,ECX
004ED08C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004ED08F  8B 90 C4 AA 79 00         MOV EDX,dword ptr [EAX + 0x79aac4]
004ED095  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004ED098  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
004ED09C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004ED0A2  03 D1                     ADD EDX,ECX
004ED0A4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004ED0A7  8B 90 C0 AA 79 00         MOV EDX,dword ptr [EAX + 0x79aac0]
004ED0AD  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004ED0B3  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004ED0B9  D9 1C 24                  FSTP float ptr [ESP]
004ED0BC  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004ED0BF  51                        PUSH ECX
004ED0C0  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004ED0C4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004ED0CA  03 D1                     ADD EDX,ECX
004ED0CC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004ED0D2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004ED0D5  D9 1C 24                  FSTP float ptr [ESP]
004ED0D8  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004ED0DB  51                        PUSH ECX
004ED0DC  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004ED0E2  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004ED0E8  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004ED0EE  D9 1C 24                  FSTP float ptr [ESP]
004ED0F1  E8 E3 74 F1 FF            CALL 0x004045d9
004ED0F6  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004ED0FC  6A 01                     PUSH 0x1
004ED0FE  E8 7F 58 F1 FF            CALL 0x00402982
004ED103  8B 06                     MOV EAX,dword ptr [ESI]
004ED105  68 2A 04 00 00            PUSH 0x42a
004ED10A  6A 03                     PUSH 0x3
004ED10C  8B CE                     MOV ECX,ESI
004ED10E  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004ED114  33 C0                     XOR EAX,EAX
004ED116  5F                        POP EDI
004ED117  5E                        POP ESI
004ED118  8B E5                     MOV ESP,EBP
004ED11A  5D                        POP EBP
004ED11B  C3                        RET
LAB_004ed11c:
004ED11C  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004ED122  E8 E8 6B F1 FF            CALL 0x00403d0f
004ED127  5F                        POP EDI
004ED128  33 C0                     XOR EAX,EAX
004ED12A  5E                        POP ESI
004ED12B  8B E5                     MOV ESP,EBP
004ED12D  5D                        POP EBP
004ED12E  C3                        RET
