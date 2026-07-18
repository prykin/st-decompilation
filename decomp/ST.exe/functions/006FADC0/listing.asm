FUN_006fadc0:
006FADC0  55                        PUSH EBP
006FADC1  8B EC                     MOV EBP,ESP
006FADC3  83 EC 10                  SUB ESP,0x10
006FADC6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FADC9  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FADD3  48                        DEC EAX
006FADD4  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FADD7  0F 88 71 06 00 00         JS 0x006fb44e
006FADDD  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006FADE0  53                        PUSH EBX
006FADE1  56                        PUSH ESI
006FADE2  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FADE5  57                        PUSH EDI
006FADE6  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006FADE9  EB 06                     JMP 0x006fadf1
LAB_006fadeb:
006FADEB  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006FADEE  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
LAB_006fadf1:
006FADF1  F6 C2 01                  TEST DL,0x1
006FADF4  75 4E                     JNZ 0x006fae44
LAB_006fadf6:
006FADF6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FADF9  48                        DEC EAX
006FADFA  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FADFD  78 42                     JS 0x006fae41
006FADFF  33 C0                     XOR EAX,EAX
006FAE01  8A 06                     MOV AL,byte ptr [ESI]
006FAE03  46                        INC ESI
006FAE04  85 C0                     TEST EAX,EAX
006FAE06  74 2C                     JZ 0x006fae34
006FAE08  8B CF                     MOV ECX,EDI
LAB_006fae0a:
006FAE0A  A8 80                     TEST AL,0x80
006FAE0C  74 16                     JZ 0x006fae24
006FAE0E  A8 40                     TEST AL,0x40
006FAE10  74 06                     JZ 0x006fae18
006FAE12  46                        INC ESI
006FAE13  83 E0 3F                  AND EAX,0x3f
006FAE16  EB 0F                     JMP 0x006fae27
LAB_006fae18:
006FAE18  8B D8                     MOV EBX,EAX
006FAE1A  83 E3 3F                  AND EBX,0x3f
006FAE1D  03 F3                     ADD ESI,EBX
006FAE1F  83 E0 3F                  AND EAX,0x3f
006FAE22  EB 03                     JMP 0x006fae27
LAB_006fae24:
006FAE24  83 E0 7F                  AND EAX,0x7f
LAB_006fae27:
006FAE27  2B C8                     SUB ECX,EAX
006FAE29  85 C9                     TEST ECX,ECX
006FAE2B  7E 07                     JLE 0x006fae34
006FAE2D  33 C0                     XOR EAX,EAX
006FAE2F  8A 06                     MOV AL,byte ptr [ESI]
006FAE31  46                        INC ESI
006FAE32  EB D6                     JMP 0x006fae0a
LAB_006fae34:
006FAE34  42                        INC EDX
006FAE35  83 FA 04                  CMP EDX,0x4
006FAE38  7E 02                     JLE 0x006fae3c
006FAE3A  33 D2                     XOR EDX,EDX
LAB_006fae3c:
006FAE3C  F6 C2 01                  TEST DL,0x1
006FAE3F  74 B5                     JZ 0x006fadf6
LAB_006fae41:
006FAE41  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_006fae44:
006FAE44  33 C0                     XOR EAX,EAX
006FAE46  8A 06                     MOV AL,byte ptr [ESI]
006FAE48  46                        INC ESI
006FAE49  85 C0                     TEST EAX,EAX
006FAE4B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006FAE4E  0F 84 C1 05 00 00         JZ 0x006fb415
006FAE54  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006FAE57  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006FAE5A  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006FAE5D  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006FAE60  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FAE63  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006fae66:
006FAE66  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FAE69  A8 80                     TEST AL,0x80
006FAE6B  74 28                     JZ 0x006fae95
006FAE6D  83 E0 3F                  AND EAX,0x3f
006FAE70  3B C7                     CMP EAX,EDI
006FAE72  7F 34                     JG 0x006faea8
006FAE74  F6 45 F8 40               TEST byte ptr [EBP + -0x8],0x40
006FAE78  74 0D                     JZ 0x006fae87
006FAE7A  46                        INC ESI
006FAE7B  2B F8                     SUB EDI,EAX
006FAE7D  33 C0                     XOR EAX,EAX
006FAE7F  8A 06                     MOV AL,byte ptr [ESI]
006FAE81  46                        INC ESI
006FAE82  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006FAE85  EB DF                     JMP 0x006fae66
LAB_006fae87:
006FAE87  03 F0                     ADD ESI,EAX
006FAE89  2B F8                     SUB EDI,EAX
006FAE8B  33 C0                     XOR EAX,EAX
006FAE8D  8A 06                     MOV AL,byte ptr [ESI]
006FAE8F  46                        INC ESI
006FAE90  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006FAE93  EB D1                     JMP 0x006fae66
LAB_006fae95:
006FAE95  83 E0 7F                  AND EAX,0x7f
006FAE98  3B C7                     CMP EAX,EDI
006FAE9A  7F 0C                     JG 0x006faea8
006FAE9C  2B F8                     SUB EDI,EAX
006FAE9E  33 C0                     XOR EAX,EAX
006FAEA0  8A 06                     MOV AL,byte ptr [ESI]
006FAEA2  46                        INC ESI
006FAEA3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006FAEA6  EB BE                     JMP 0x006fae66
LAB_006faea8:
006FAEA8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006FAEAB  2B C7                     SUB EAX,EDI
006FAEAD  81 E2 C0 00 00 00         AND EDX,0xc0
006FAEB3  80 FA 80                  CMP DL,0x80
006FAEB6  75 02                     JNZ 0x006faeba
006FAEB8  03 F7                     ADD ESI,EDI
LAB_006faeba:
006FAEBA  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006FAEBD  3B C7                     CMP EAX,EDI
006FAEBF  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FAEC2  0F 8F EF 02 00 00         JG 0x006fb1b7
006FAEC8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006FAECB  81 E2 80 00 00 00         AND EDX,0x80
LAB_006faed1:
006FAED1  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006FAED4  2B F8                     SUB EDI,EAX
006FAED6  85 D2                     TEST EDX,EDX
006FAED8  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006FAEDB  0F 84 7C 02 00 00         JZ 0x006fb15d
006FAEE1  F6 45 F8 40               TEST byte ptr [EBP + -0x8],0x40
006FAEE5  0F 84 2C 01 00 00         JZ 0x006fb017
006FAEEB  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FAEEE  33 D2                     XOR EDX,EDX
006FAEF0  8A 16                     MOV DL,byte ptr [ESI]
006FAEF2  8B FA                     MOV EDI,EDX
006FAEF4  33 D2                     XOR EDX,EDX
006FAEF6  46                        INC ESI
006FAEF7  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006FAEFA  85 C9                     TEST ECX,ECX
006FAEFC  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006FAEFF  0F 8E 99 00 00 00         JLE 0x006faf9e
006FAF05  8D 51 FF                  LEA EDX,[ECX + -0x1]
006FAF08  83 FA 03                  CMP EDX,0x3
006FAF0B  0F 87 8D 00 00 00         JA 0x006faf9e
switchD_006faf11::switchD:
006FAF11  FF 24 95 54 B4 6F 00      JMP dword ptr [EDX*0x4 + 0x6fb454]
switchD_006faf11::caseD_1:
006FAF18  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FAF1B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FAF1E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FAF21  33 C9                     XOR ECX,ECX
006FAF23  66 8B 0F                  MOV CX,word ptr [EDI]
006FAF26  3B D1                     CMP EDX,ECX
006FAF28  77 05                     JA 0x006faf2f
006FAF2A  8A 55 F0                  MOV DL,byte ptr [EBP + -0x10]
006FAF2D  88 13                     MOV byte ptr [EBX],DL
LAB_006faf2f:
006FAF2F  83 C7 02                  ADD EDI,0x2
006FAF32  43                        INC EBX
006FAF33  48                        DEC EAX
006FAF34  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FAF37  85 C0                     TEST EAX,EAX
006FAF39  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FAF3C  B9 02 00 00 00            MOV ECX,0x2
006FAF41  0F 8E 3C 02 00 00         JLE 0x006fb183
006FAF47  EB 06                     JMP 0x006faf4f
switchD_006faf11::caseD_2:
006FAF49  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FAF4C  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006faf4f:
006FAF4F  48                        DEC EAX
006FAF50  B9 03 00 00 00            MOV ECX,0x3
006FAF55  85 C0                     TEST EAX,EAX
006FAF57  0F 8E 26 02 00 00         JLE 0x006fb183
006FAF5D  EB 06                     JMP 0x006faf65
switchD_006faf11::caseD_3:
006FAF5F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FAF62  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006faf65:
006FAF65  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FAF68  33 C9                     XOR ECX,ECX
006FAF6A  66 8B 0F                  MOV CX,word ptr [EDI]
006FAF6D  3B D1                     CMP EDX,ECX
006FAF6F  77 05                     JA 0x006faf76
006FAF71  8A 55 F0                  MOV DL,byte ptr [EBP + -0x10]
006FAF74  88 13                     MOV byte ptr [EBX],DL
LAB_006faf76:
006FAF76  83 C7 02                  ADD EDI,0x2
006FAF79  43                        INC EBX
006FAF7A  48                        DEC EAX
006FAF7B  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FAF7E  85 C0                     TEST EAX,EAX
006FAF80  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FAF83  B9 04 00 00 00            MOV ECX,0x4
006FAF88  0F 8E F5 01 00 00         JLE 0x006fb183
006FAF8E  33 C9                     XOR ECX,ECX
006FAF90  48                        DEC EAX
006FAF91  EB 11                     JMP 0x006fafa4
switchD_006faf11::caseD_4:
006FAF93  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FAF96  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FAF99  33 C9                     XOR ECX,ECX
006FAF9B  48                        DEC EAX
006FAF9C  EB 06                     JMP 0x006fafa4
LAB_006faf9e:
006FAF9E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FAFA1  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
switchD_006faf11::default:
006FAFA4  85 C0                     TEST EAX,EAX
006FAFA6  0F 8E D7 01 00 00         JLE 0x006fb183
006FAFAC  48                        DEC EAX
006FAFAD  B9 01 00 00 00            MOV ECX,0x1
006FAFB2  85 C0                     TEST EAX,EAX
006FAFB4  0F 8E C9 01 00 00         JLE 0x006fb183
006FAFBA  8A 55 F0                  MOV DL,byte ptr [EBP + -0x10]
LAB_006fafbd:
006FAFBD  33 C9                     XOR ECX,ECX
006FAFBF  66 8B 0F                  MOV CX,word ptr [EDI]
006FAFC2  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
006FAFC5  77 02                     JA 0x006fafc9
006FAFC7  88 13                     MOV byte ptr [EBX],DL
LAB_006fafc9:
006FAFC9  83 C7 02                  ADD EDI,0x2
006FAFCC  43                        INC EBX
006FAFCD  48                        DEC EAX
006FAFCE  B9 02 00 00 00            MOV ECX,0x2
006FAFD3  85 C0                     TEST EAX,EAX
006FAFD5  7E 35                     JLE 0x006fb00c
006FAFD7  48                        DEC EAX
006FAFD8  B9 03 00 00 00            MOV ECX,0x3
006FAFDD  85 C0                     TEST EAX,EAX
006FAFDF  7E 2B                     JLE 0x006fb00c
006FAFE1  33 C9                     XOR ECX,ECX
006FAFE3  66 8B 0F                  MOV CX,word ptr [EDI]
006FAFE6  39 4D 18                  CMP dword ptr [EBP + 0x18],ECX
006FAFE9  77 02                     JA 0x006fafed
006FAFEB  88 13                     MOV byte ptr [EBX],DL
LAB_006fafed:
006FAFED  83 C7 02                  ADD EDI,0x2
006FAFF0  43                        INC EBX
006FAFF1  48                        DEC EAX
006FAFF2  B9 04 00 00 00            MOV ECX,0x4
006FAFF7  85 C0                     TEST EAX,EAX
006FAFF9  7E 11                     JLE 0x006fb00c
006FAFFB  33 C9                     XOR ECX,ECX
006FAFFD  48                        DEC EAX
006FAFFE  85 C0                     TEST EAX,EAX
006FB000  7E 0A                     JLE 0x006fb00c
006FB002  48                        DEC EAX
006FB003  B9 01 00 00 00            MOV ECX,0x1
006FB008  85 C0                     TEST EAX,EAX
006FB00A  7F B1                     JG 0x006fafbd
LAB_006fb00c:
006FB00C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FB00F  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB012  E9 6C 01 00 00            JMP 0x006fb183
LAB_006fb017:
006FB017  85 C9                     TEST ECX,ECX
006FB019  0F 8E A0 00 00 00         JLE 0x006fb0bf
006FB01F  8D 51 FF                  LEA EDX,[ECX + -0x1]
006FB022  83 FA 03                  CMP EDX,0x3
006FB025  0F 87 94 00 00 00         JA 0x006fb0bf
switchD_006fb02b::switchD:
006FB02B  FF 24 95 64 B4 6F 00      JMP dword ptr [EDX*0x4 + 0x6fb464]
switchD_006fb02b::caseD_1:
006FB032  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FB035  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006FB038  33 D2                     XOR EDX,EDX
006FB03A  66 8B 17                  MOV DX,word ptr [EDI]
006FB03D  3B CA                     CMP ECX,EDX
006FB03F  77 0C                     JA 0x006fb04d
006FB041  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FB044  33 C9                     XOR ECX,ECX
006FB046  8A 0E                     MOV CL,byte ptr [ESI]
006FB048  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FB04B  88 0B                     MOV byte ptr [EBX],CL
LAB_006fb04d:
006FB04D  83 C7 02                  ADD EDI,0x2
006FB050  43                        INC EBX
006FB051  46                        INC ESI
006FB052  48                        DEC EAX
006FB053  85 C0                     TEST EAX,EAX
006FB055  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB058  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FB05B  B9 02 00 00 00            MOV ECX,0x2
006FB060  0F 8E 1D 01 00 00         JLE 0x006fb183
006FB066  EB 03                     JMP 0x006fb06b
switchD_006fb02b::caseD_2:
006FB068  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006fb06b:
006FB06B  46                        INC ESI
006FB06C  48                        DEC EAX
006FB06D  85 C0                     TEST EAX,EAX
006FB06F  B9 03 00 00 00            MOV ECX,0x3
006FB074  0F 8E 09 01 00 00         JLE 0x006fb183
006FB07A  EB 03                     JMP 0x006fb07f
switchD_006fb02b::caseD_3:
006FB07C  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_006fb07f:
006FB07F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006FB082  33 D2                     XOR EDX,EDX
006FB084  66 8B 17                  MOV DX,word ptr [EDI]
006FB087  3B CA                     CMP ECX,EDX
006FB089  77 0C                     JA 0x006fb097
006FB08B  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FB08E  33 C9                     XOR ECX,ECX
006FB090  8A 0E                     MOV CL,byte ptr [ESI]
006FB092  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FB095  88 0B                     MOV byte ptr [EBX],CL
LAB_006fb097:
006FB097  83 C7 02                  ADD EDI,0x2
006FB09A  43                        INC EBX
006FB09B  46                        INC ESI
006FB09C  48                        DEC EAX
006FB09D  85 C0                     TEST EAX,EAX
006FB09F  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB0A2  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FB0A5  B9 04 00 00 00            MOV ECX,0x4
006FB0AA  0F 8E D3 00 00 00         JLE 0x006fb183
006FB0B0  46                        INC ESI
006FB0B1  33 C9                     XOR ECX,ECX
006FB0B3  48                        DEC EAX
006FB0B4  EB 0C                     JMP 0x006fb0c2
switchD_006fb02b::caseD_4:
006FB0B6  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FB0B9  46                        INC ESI
006FB0BA  33 C9                     XOR ECX,ECX
006FB0BC  48                        DEC EAX
006FB0BD  EB 03                     JMP 0x006fb0c2
LAB_006fb0bf:
006FB0BF  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
switchD_006fb02b::default:
006FB0C2  85 C0                     TEST EAX,EAX
006FB0C4  0F 8E B9 00 00 00         JLE 0x006fb183
006FB0CA  46                        INC ESI
006FB0CB  48                        DEC EAX
006FB0CC  85 C0                     TEST EAX,EAX
006FB0CE  B9 01 00 00 00            MOV ECX,0x1
006FB0D3  0F 8E AA 00 00 00         JLE 0x006fb183
LAB_006fb0d9:
006FB0D9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006FB0DC  33 D2                     XOR EDX,EDX
006FB0DE  66 8B 17                  MOV DX,word ptr [EDI]
006FB0E1  3B CA                     CMP ECX,EDX
006FB0E3  77 0C                     JA 0x006fb0f1
006FB0E5  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FB0E8  33 C9                     XOR ECX,ECX
006FB0EA  8A 0E                     MOV CL,byte ptr [ESI]
006FB0EC  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FB0EF  88 0B                     MOV byte ptr [EBX],CL
LAB_006fb0f1:
006FB0F1  83 C7 02                  ADD EDI,0x2
006FB0F4  43                        INC EBX
006FB0F5  46                        INC ESI
006FB0F6  48                        DEC EAX
006FB0F7  85 C0                     TEST EAX,EAX
006FB0F9  B9 02 00 00 00            MOV ECX,0x2
006FB0FE  0F 8E 08 FF FF FF         JLE 0x006fb00c
006FB104  46                        INC ESI
006FB105  48                        DEC EAX
006FB106  85 C0                     TEST EAX,EAX
006FB108  B9 03 00 00 00            MOV ECX,0x3
006FB10D  0F 8E F9 FE FF FF         JLE 0x006fb00c
006FB113  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006FB116  33 D2                     XOR EDX,EDX
006FB118  66 8B 17                  MOV DX,word ptr [EDI]
006FB11B  3B CA                     CMP ECX,EDX
006FB11D  77 0C                     JA 0x006fb12b
006FB11F  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FB122  33 C9                     XOR ECX,ECX
006FB124  8A 0E                     MOV CL,byte ptr [ESI]
006FB126  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FB129  88 0B                     MOV byte ptr [EBX],CL
LAB_006fb12b:
006FB12B  83 C7 02                  ADD EDI,0x2
006FB12E  43                        INC EBX
006FB12F  46                        INC ESI
006FB130  48                        DEC EAX
006FB131  85 C0                     TEST EAX,EAX
006FB133  B9 04 00 00 00            MOV ECX,0x4
006FB138  0F 8E CE FE FF FF         JLE 0x006fb00c
006FB13E  46                        INC ESI
006FB13F  33 C9                     XOR ECX,ECX
006FB141  48                        DEC EAX
006FB142  85 C0                     TEST EAX,EAX
006FB144  0F 8E C2 FE FF FF         JLE 0x006fb00c
006FB14A  46                        INC ESI
006FB14B  48                        DEC EAX
006FB14C  85 C0                     TEST EAX,EAX
006FB14E  B9 01 00 00 00            MOV ECX,0x1
006FB153  7F 84                     JG 0x006fb0d9
006FB155  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FB158  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB15B  EB 26                     JMP 0x006fb183
LAB_006fb15d:
006FB15D  48                        DEC EAX
006FB15E  78 23                     JS 0x006fb183
006FB160  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FB163  40                        INC EAX
LAB_006fb164:
006FB164  8B D1                     MOV EDX,ECX
006FB166  83 E2 01                  AND EDX,0x1
006FB169  80 FA 01                  CMP DL,0x1
006FB16C  75 04                     JNZ 0x006fb172
006FB16E  43                        INC EBX
006FB16F  83 C7 02                  ADD EDI,0x2
LAB_006fb172:
006FB172  41                        INC ECX
006FB173  83 F9 04                  CMP ECX,0x4
006FB176  7E 02                     JLE 0x006fb17a
006FB178  33 C9                     XOR ECX,ECX
LAB_006fb17a:
006FB17A  48                        DEC EAX
006FB17B  75 E7                     JNZ 0x006fb164
006FB17D  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006FB180  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_006fb183:
006FB183  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006FB186  85 C0                     TEST EAX,EAX
006FB188  7E 28                     JLE 0x006fb1b2
006FB18A  33 D2                     XOR EDX,EDX
006FB18C  8A 16                     MOV DL,byte ptr [ESI]
006FB18E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006FB191  81 E2 80 00 00 00         AND EDX,0x80
006FB197  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006FB19A  46                        INC ESI
006FB19B  85 D2                     TEST EDX,EDX
006FB19D  74 05                     JZ 0x006fb1a4
006FB19F  83 E0 3F                  AND EAX,0x3f
006FB1A2  EB 03                     JMP 0x006fb1a7
LAB_006fb1a4:
006FB1A4  83 E0 7F                  AND EAX,0x7f
LAB_006fb1a7:
006FB1A7  3B 45 F4                  CMP EAX,dword ptr [EBP + -0xc]
006FB1AA  0F 8E 21 FD FF FF         JLE 0x006faed1
006FB1B0  EB 02                     JMP 0x006fb1b4
LAB_006fb1b2:
006FB1B2  33 C0                     XOR EAX,EAX
LAB_006fb1b4:
006FB1B4  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006fb1b7:
006FB1B7  2B C7                     SUB EAX,EDI
006FB1B9  85 FF                     TEST EDI,EDI
006FB1BB  0F 8E 08 02 00 00         JLE 0x006fb3c9
006FB1C1  8A 55 F8                  MOV DL,byte ptr [EBP + -0x8]
006FB1C4  F6 C2 80                  TEST DL,0x80
006FB1C7  0F 84 FC 01 00 00         JZ 0x006fb3c9
006FB1CD  F6 C2 40                  TEST DL,0x40
006FB1D0  0F 84 0D 01 00 00         JZ 0x006fb2e3
006FB1D6  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006FB1D9  33 D2                     XOR EDX,EDX
006FB1DB  8A 16                     MOV DL,byte ptr [ESI]
006FB1DD  8B FA                     MOV EDI,EDX
006FB1DF  33 D2                     XOR EDX,EDX
006FB1E1  46                        INC ESI
006FB1E2  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
006FB1E5  85 C9                     TEST ECX,ECX
006FB1E7  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006FB1EA  0F 8E 83 00 00 00         JLE 0x006fb273
006FB1F0  49                        DEC ECX
006FB1F1  83 F9 03                  CMP ECX,0x3
006FB1F4  77 7D                     JA 0x006fb273
switchD_006fb1f6::switchD:
006FB1F6  FF 24 8D 74 B4 6F 00      JMP dword ptr [ECX*0x4 + 0x6fb474]
switchD_006fb1f6::caseD_1:
006FB1FD  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006FB200  33 C9                     XOR ECX,ECX
006FB202  66 8B 0F                  MOV CX,word ptr [EDI]
006FB205  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006FB208  3B F9                     CMP EDI,ECX
006FB20A  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006FB20D  77 02                     JA 0x006fb211
006FB20F  88 17                     MOV byte ptr [EDI],DL
LAB_006fb211:
006FB211  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FB214  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FB217  83 C2 02                  ADD EDX,0x2
006FB21A  47                        INC EDI
006FB21B  49                        DEC ECX
006FB21C  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006FB21F  85 C9                     TEST ECX,ECX
006FB221  0F 8E A2 01 00 00         JLE 0x006fb3c9
006FB227  EB 06                     JMP 0x006fb22f
switchD_006fb1f6::caseD_2:
006FB229  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FB22C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006fb22f:
006FB22F  49                        DEC ECX
006FB230  85 C9                     TEST ECX,ECX
006FB232  0F 8E 91 01 00 00         JLE 0x006fb3c9
006FB238  EB 06                     JMP 0x006fb240
switchD_006fb1f6::caseD_3:
006FB23A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FB23D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006fb240:
006FB240  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FB243  33 D2                     XOR EDX,EDX
006FB245  66 8B 13                  MOV DX,word ptr [EBX]
006FB248  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FB24B  3B DA                     CMP EBX,EDX
006FB24D  77 05                     JA 0x006fb254
006FB24F  8A 55 F0                  MOV DL,byte ptr [EBP + -0x10]
006FB252  88 17                     MOV byte ptr [EDI],DL
LAB_006fb254:
006FB254  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FB257  83 C3 02                  ADD EBX,0x2
006FB25A  47                        INC EDI
006FB25B  49                        DEC ECX
006FB25C  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FB25F  85 C9                     TEST ECX,ECX
006FB261  0F 8E 62 01 00 00         JLE 0x006fb3c9
006FB267  49                        DEC ECX
006FB268  EB 0F                     JMP 0x006fb279
switchD_006fb1f6::caseD_4:
006FB26A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FB26D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006FB270  49                        DEC ECX
006FB271  EB 06                     JMP 0x006fb279
LAB_006fb273:
006FB273  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FB276  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
switchD_006fb1f6::default:
006FB279  85 C9                     TEST ECX,ECX
006FB27B  0F 8E 48 01 00 00         JLE 0x006fb3c9
006FB281  49                        DEC ECX
006FB282  85 C9                     TEST ECX,ECX
006FB284  0F 8E 3F 01 00 00         JLE 0x006fb3c9
LAB_006fb28a:
006FB28A  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FB28D  33 D2                     XOR EDX,EDX
006FB28F  66 8B 13                  MOV DX,word ptr [EBX]
006FB292  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FB295  3B DA                     CMP EBX,EDX
006FB297  77 05                     JA 0x006fb29e
006FB299  8A 55 F0                  MOV DL,byte ptr [EBP + -0x10]
006FB29C  88 17                     MOV byte ptr [EDI],DL
LAB_006fb29e:
006FB29E  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FB2A1  83 E9 02                  SUB ECX,0x2
006FB2A4  83 C3 02                  ADD EBX,0x2
006FB2A7  47                        INC EDI
006FB2A8  85 C9                     TEST ECX,ECX
006FB2AA  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FB2AD  0F 8E 16 01 00 00         JLE 0x006fb3c9
006FB2B3  33 D2                     XOR EDX,EDX
006FB2B5  66 8B 13                  MOV DX,word ptr [EBX]
006FB2B8  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FB2BB  3B DA                     CMP EBX,EDX
006FB2BD  77 05                     JA 0x006fb2c4
006FB2BF  8A 55 F0                  MOV DL,byte ptr [EBP + -0x10]
006FB2C2  88 17                     MOV byte ptr [EDI],DL
LAB_006fb2c4:
006FB2C4  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FB2C7  83 E9 02                  SUB ECX,0x2
006FB2CA  83 C3 02                  ADD EBX,0x2
006FB2CD  47                        INC EDI
006FB2CE  85 C9                     TEST ECX,ECX
006FB2D0  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FB2D3  0F 8E F0 00 00 00         JLE 0x006fb3c9
006FB2D9  49                        DEC ECX
006FB2DA  85 C9                     TEST ECX,ECX
006FB2DC  7F AC                     JG 0x006fb28a
006FB2DE  E9 E6 00 00 00            JMP 0x006fb3c9
LAB_006fb2e3:
006FB2E3  85 C9                     TEST ECX,ECX
006FB2E5  7E 73                     JLE 0x006fb35a
006FB2E7  49                        DEC ECX
006FB2E8  83 F9 03                  CMP ECX,0x3
006FB2EB  77 6D                     JA 0x006fb35a
switchD_006fb2ed::switchD:
006FB2ED  FF 24 8D 84 B4 6F 00      JMP dword ptr [ECX*0x4 + 0x6fb484]
switchD_006fb2ed::caseD_1:
006FB2F4  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FB2F7  33 C9                     XOR ECX,ECX
006FB2F9  66 8B 0A                  MOV CX,word ptr [EDX]
006FB2FC  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FB2FF  3B D1                     CMP EDX,ECX
006FB301  77 0C                     JA 0x006fb30f
006FB303  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FB306  33 C9                     XOR ECX,ECX
006FB308  8A 0E                     MOV CL,byte ptr [ESI]
006FB30A  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FB30D  88 0B                     MOV byte ptr [EBX],CL
LAB_006fb30f:
006FB30F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FB312  83 C1 02                  ADD ECX,0x2
006FB315  43                        INC EBX
006FB316  46                        INC ESI
006FB317  4F                        DEC EDI
006FB318  85 FF                     TEST EDI,EDI
006FB31A  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FB31D  0F 8E A6 00 00 00         JLE 0x006fb3c9
switchD_006fb2ed::caseD_2:
006FB323  46                        INC ESI
006FB324  4F                        DEC EDI
006FB325  85 FF                     TEST EDI,EDI
006FB327  0F 8E 9C 00 00 00         JLE 0x006fb3c9
switchD_006fb2ed::caseD_3:
006FB32D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FB330  33 D2                     XOR EDX,EDX
006FB332  66 8B 11                  MOV DX,word ptr [ECX]
006FB335  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006FB338  3B CA                     CMP ECX,EDX
006FB33A  77 0C                     JA 0x006fb348
006FB33C  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FB33F  33 D2                     XOR EDX,EDX
006FB341  8A 16                     MOV DL,byte ptr [ESI]
006FB343  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB346  88 13                     MOV byte ptr [EBX],DL
LAB_006fb348:
006FB348  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FB34B  83 C1 02                  ADD ECX,0x2
006FB34E  43                        INC EBX
006FB34F  46                        INC ESI
006FB350  4F                        DEC EDI
006FB351  85 FF                     TEST EDI,EDI
006FB353  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FB356  7E 71                     JLE 0x006fb3c9
switchD_006fb2ed::caseD_4:
006FB358  46                        INC ESI
006FB359  4F                        DEC EDI
switchD_006fb2ed::default:
006FB35A  85 FF                     TEST EDI,EDI
006FB35C  7E 6B                     JLE 0x006fb3c9
006FB35E  46                        INC ESI
006FB35F  4F                        DEC EDI
006FB360  85 FF                     TEST EDI,EDI
006FB362  7E 65                     JLE 0x006fb3c9
LAB_006fb364:
006FB364  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006FB367  33 C9                     XOR ECX,ECX
006FB369  66 8B 0A                  MOV CX,word ptr [EDX]
006FB36C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006FB36F  3B D1                     CMP EDX,ECX
006FB371  77 0C                     JA 0x006fb37f
006FB373  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006FB376  33 C9                     XOR ECX,ECX
006FB378  8A 0E                     MOV CL,byte ptr [ESI]
006FB37A  8A 0C 11                  MOV CL,byte ptr [ECX + EDX*0x1]
006FB37D  88 0B                     MOV byte ptr [EBX],CL
LAB_006fb37f:
006FB37F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FB382  83 C1 02                  ADD ECX,0x2
006FB385  43                        INC EBX
006FB386  46                        INC ESI
006FB387  4F                        DEC EDI
006FB388  85 FF                     TEST EDI,EDI
006FB38A  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FB38D  7E 3A                     JLE 0x006fb3c9
006FB38F  46                        INC ESI
006FB390  4F                        DEC EDI
006FB391  85 FF                     TEST EDI,EDI
006FB393  7E 34                     JLE 0x006fb3c9
006FB395  33 D2                     XOR EDX,EDX
006FB397  66 8B 11                  MOV DX,word ptr [ECX]
006FB39A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006FB39D  3B CA                     CMP ECX,EDX
006FB39F  77 0C                     JA 0x006fb3ad
006FB3A1  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FB3A4  33 D2                     XOR EDX,EDX
006FB3A6  8A 16                     MOV DL,byte ptr [ESI]
006FB3A8  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
006FB3AB  88 13                     MOV byte ptr [EBX],DL
LAB_006fb3ad:
006FB3AD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FB3B0  83 C1 02                  ADD ECX,0x2
006FB3B3  43                        INC EBX
006FB3B4  46                        INC ESI
006FB3B5  4F                        DEC EDI
006FB3B6  85 FF                     TEST EDI,EDI
006FB3B8  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FB3BB  7E 0C                     JLE 0x006fb3c9
006FB3BD  46                        INC ESI
006FB3BE  4F                        DEC EDI
006FB3BF  85 FF                     TEST EDI,EDI
006FB3C1  7E 06                     JLE 0x006fb3c9
006FB3C3  46                        INC ESI
006FB3C4  4F                        DEC EDI
006FB3C5  85 FF                     TEST EDI,EDI
006FB3C7  7F 9B                     JG 0x006fb364
LAB_006fb3c9:
006FB3C9  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006FB3CC  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006FB3CF  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006FB3D2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006FB3D5  2B CB                     SUB ECX,EBX
006FB3D7  2B CF                     SUB ECX,EDI
006FB3D9  3B C1                     CMP EAX,ECX
006FB3DB  7D 2B                     JGE 0x006fb408
LAB_006fb3dd:
006FB3DD  81 E2 C0 00 00 00         AND EDX,0xc0
006FB3E3  2B C8                     SUB ECX,EAX
006FB3E5  80 FA 80                  CMP DL,0x80
006FB3E8  75 02                     JNZ 0x006fb3ec
006FB3EA  03 F0                     ADD ESI,EAX
LAB_006fb3ec:
006FB3EC  33 D2                     XOR EDX,EDX
006FB3EE  8A 16                     MOV DL,byte ptr [ESI]
006FB3F0  8B C2                     MOV EAX,EDX
006FB3F2  24 80                     AND AL,0x80
006FB3F4  46                        INC ESI
006FB3F5  84 C0                     TEST AL,AL
006FB3F7  8B C2                     MOV EAX,EDX
006FB3F9  74 09                     JZ 0x006fb404
006FB3FB  83 E0 3F                  AND EAX,0x3f
006FB3FE  F6 C2 40                  TEST DL,0x40
006FB401  74 01                     JZ 0x006fb404
006FB403  46                        INC ESI
LAB_006fb404:
006FB404  3B C1                     CMP EAX,ECX
006FB406  7C D5                     JL 0x006fb3dd
LAB_006fb408:
006FB408  81 E2 C0 00 00 00         AND EDX,0xc0
006FB40E  80 FA 80                  CMP DL,0x80
006FB411  75 02                     JNZ 0x006fb415
006FB413  03 F1                     ADD ESI,ECX
LAB_006fb415:
006FB415  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006FB418  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006FB41B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006FB41E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006FB421  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006FB424  03 D9                     ADD EBX,ECX
006FB426  03 FA                     ADD EDI,EDX
006FB428  40                        INC EAX
006FB429  83 F8 04                  CMP EAX,0x4
006FB42C  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006FB42F  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006FB432  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
006FB435  7E 07                     JLE 0x006fb43e
006FB437  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_006fb43e:
006FB43E  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FB441  48                        DEC EAX
006FB442  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FB445  0F 89 A0 F9 FF FF         JNS 0x006fadeb
006FB44B  5F                        POP EDI
006FB44C  5E                        POP ESI
006FB44D  5B                        POP EBX
LAB_006fb44e:
006FB44E  8B E5                     MOV ESP,EBP
006FB450  5D                        POP EBP
006FB451  C2 34 00                  RET 0x34
