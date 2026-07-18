FUN_006b48e0:
006B48E0  55                        PUSH EBP
006B48E1  8B EC                     MOV EBP,ESP
006B48E3  6A FF                     PUSH -0x1
006B48E5  68 E8 D8 79 00            PUSH 0x79d8e8
006B48EA  68 64 D9 72 00            PUSH 0x72d964
006B48EF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006B48F5  50                        PUSH EAX
006B48F6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006B48FD  83 EC 34                  SUB ESP,0x34
006B4900  53                        PUSH EBX
006B4901  56                        PUSH ESI
006B4902  57                        PUSH EDI
006B4903  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B4906  33 FF                     XOR EDI,EDI
006B4908  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006B490B  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006B490E  39 7D 24                  CMP dword ptr [EBP + 0x24],EDI
006B4911  0F 8E EE 01 00 00         JLE 0x006b4b05
006B4917  39 7D 28                  CMP dword ptr [EBP + 0x28],EDI
006B491A  0F 8E E5 01 00 00         JLE 0x006b4b05
006B4920  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B4923  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006B4926  25 00 11 00 00            AND EAX,0x1100
006B492B  3D 00 01 00 00            CMP EAX,0x100
006B4930  0F 84 CF 01 00 00         JZ 0x006b4b05
006B4936  39 7E 40                  CMP dword ptr [ESI + 0x40],EDI
006B4939  0F 84 C6 01 00 00         JZ 0x006b4b05
006B493F  39 7D 18                  CMP dword ptr [EBP + 0x18],EDI
006B4942  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006B4945  75 09                     JNZ 0x006b4950
006B4947  53                        PUSH EBX
006B4948  E8 53 06 00 00            CALL 0x006b4fa0
006B494D  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006b4950:
006B4950  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B4957  74 0D                     JZ 0x006b4966
006B4959  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006B495F  51                        PUSH ECX
006B4960  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b4966:
006B4966  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006B4969  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
006B496C  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006B496F  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006B4972  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
006B4975  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006B4978  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B497B  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006B497E  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006B4981  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006B4984  8D 86 84 04 00 00         LEA EAX,[ESI + 0x484]
006B498A  50                        PUSH EAX
006B498B  8D 4D C4                  LEA ECX,[EBP + -0x3c]
006B498E  51                        PUSH ECX
006B498F  8D 55 C4                  LEA EDX,[EBP + -0x3c]
006B4992  52                        PUSH EDX
006B4993  E8 18 B5 01 00            CALL 0x006cfeb0
006B4998  83 C4 0C                  ADD ESP,0xc
006B499B  85 C0                     TEST EAX,EAX
006B499D  0F 84 20 01 00 00         JZ 0x006b4ac3
006B49A3  C7 45 C0 00 00 00 00      MOV dword ptr [EBP + -0x40],0x0
LAB_006b49aa:
006B49AA  6A 00                     PUSH 0x0
006B49AC  8D 45 DC                  LEA EAX,[EBP + -0x24]
006B49AF  50                        PUSH EAX
006B49B0  8D 4D D8                  LEA ECX,[EBP + -0x28]
006B49B3  51                        PUSH ECX
006B49B4  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
006B49B7  52                        PUSH EDX
006B49B8  E8 83 74 00 00            CALL 0x006bbe40
006B49BD  8B F8                     MOV EDI,EAX
006B49BF  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
006B49C2  85 FF                     TEST EDI,EDI
006B49C4  74 22                     JZ 0x006b49e8
006B49C6  81 FF C2 01 76 88         CMP EDI,0x887601c2
006B49CC  75 12                     JNZ 0x006b49e0
006B49CE  56                        PUSH ESI
006B49CF  E8 6C A2 01 00            CALL 0x006cec40
006B49D4  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006B49D7  40                        INC EAX
006B49D8  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006B49DB  83 F8 02                  CMP EAX,0x2
006B49DE  7C CA                     JL 0x006b49aa
LAB_006b49e0:
006B49E0  85 FF                     TEST EDI,EDI
006B49E2  0F 85 C9 00 00 00         JNZ 0x006b4ab1
LAB_006b49e8:
006B49E8  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006B49EB  2B 46 10                  SUB EAX,dword ptr [ESI + 0x10]
006B49EE  2B 45 0C                  SUB EAX,dword ptr [EBP + 0xc]
006B49F1  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006B49F4  03 F8                     ADD EDI,EAX
006B49F6  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006B49F9  8B CA                     MOV ECX,EDX
006B49FB  2B 4E 14                  SUB ECX,dword ptr [ESI + 0x14]
006B49FE  2B 4D 10                  SUB ECX,dword ptr [EBP + 0x10]
006B4A01  01 4D 20                  ADD dword ptr [EBP + 0x20],ECX
006B4A04  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
006B4A07  85 C9                     TEST ECX,ECX
006B4A09  7C 1E                     JL 0x006b4a29
006B4A0B  33 C0                     XOR EAX,EAX
006B4A0D  66 8B 43 0E               MOV AX,word ptr [EBX + 0xe]
006B4A11  0F AF 43 04               IMUL EAX,dword ptr [EBX + 0x4]
006B4A15  83 C0 1F                  ADD EAX,0x1f
006B4A18  C1 E8 03                  SHR EAX,0x3
006B4A1B  25 FC FF FF 1F            AND EAX,0x1ffffffc
006B4A20  2B 4D 20                  SUB ECX,dword ptr [EBP + 0x20]
006B4A23  49                        DEC ECX
006B4A24  0F AF C8                  IMUL ECX,EAX
006B4A27  EB 1B                     JMP 0x006b4a44
LAB_006b4a29:
006B4A29  33 C0                     XOR EAX,EAX
006B4A2B  66 8B 43 0E               MOV AX,word ptr [EBX + 0xe]
006B4A2F  0F AF 43 04               IMUL EAX,dword ptr [EBX + 0x4]
006B4A33  83 C0 1F                  ADD EAX,0x1f
006B4A36  C1 E8 03                  SHR EAX,0x3
006B4A39  25 FC FF FF 1F            AND EAX,0x1ffffffc
006B4A3E  8B C8                     MOV ECX,EAX
006B4A40  0F AF 4D 20               IMUL ECX,dword ptr [EBP + 0x20]
LAB_006b4a44:
006B4A44  03 CF                     ADD ECX,EDI
006B4A46  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
006B4A49  0F AF D7                  IMUL EDX,EDI
006B4A4C  03 55 C4                  ADD EDX,dword ptr [EBP + -0x3c]
006B4A4F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006B4A56  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006B4A59  53                        PUSH EBX
006B4A5A  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006B4A5D  53                        PUSH EBX
006B4A5E  8B 5D 2C                  MOV EBX,dword ptr [EBP + 0x2c]
006B4A61  53                        PUSH EBX
006B4A62  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
006B4A65  53                        PUSH EBX
006B4A66  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
006B4A69  53                        PUSH EBX
006B4A6A  F7 D8                     NEG EAX
006B4A6C  50                        PUSH EAX
006B4A6D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B4A70  03 C8                     ADD ECX,EAX
006B4A72  51                        PUSH ECX
006B4A73  57                        PUSH EDI
006B4A74  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006B4A77  03 D1                     ADD EDX,ECX
006B4A79  52                        PUSH EDX
006B4A7A  E8 D1 C4 01 00            CALL 0x006d0f50
006B4A7F  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B4A86  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
006B4A89  EB 18                     JMP 0x006b4aa3
LAB_006b4aa3:
006B4AA3  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006B4AA6  8B 10                     MOV EDX,dword ptr [EAX]
006B4AA8  6A 00                     PUSH 0x0
006B4AAA  50                        PUSH EAX
006B4AAB  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
LAB_006b4ab1:
006B4AB1  81 FF A0 00 76 88         CMP EDI,0x887600a0
006B4AB7  74 08                     JZ 0x006b4ac1
006B4AB9  81 FF AE 01 76 88         CMP EDI,0x887601ae
006B4ABF  75 02                     JNZ 0x006b4ac3
LAB_006b4ac1:
006B4AC1  33 FF                     XOR EDI,EDI
LAB_006b4ac3:
006B4AC3  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B4ACA  74 0D                     JZ 0x006b4ad9
006B4ACC  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B4AD2  56                        PUSH ESI
006B4AD3  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b4ad9:
006B4AD9  85 FF                     TEST EDI,EDI
006B4ADB  74 28                     JZ 0x006b4b05
006B4ADD  6A 46                     PUSH 0x46
006B4ADF  68 20 DB 7E 00            PUSH 0x7edb20
006B4AE4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B4AE9  50                        PUSH EAX
006B4AEA  57                        PUSH EDI
006B4AEB  E8 50 13 FF FF            CALL 0x006a5e40
006B4AF0  8B C7                     MOV EAX,EDI
006B4AF2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B4AF5  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B4AFC  5F                        POP EDI
006B4AFD  5E                        POP ESI
006B4AFE  5B                        POP EBX
006B4AFF  8B E5                     MOV ESP,EBP
006B4B01  5D                        POP EBP
006B4B02  C2 30 00                  RET 0x30
LAB_006b4b05:
006B4B05  33 C0                     XOR EAX,EAX
006B4B07  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B4B0A  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B4B11  5F                        POP EDI
006B4B12  5E                        POP ESI
006B4B13  5B                        POP EBX
006B4B14  8B E5                     MOV ESP,EBP
006B4B16  5D                        POP EBP
006B4B17  C2 30 00                  RET 0x30
