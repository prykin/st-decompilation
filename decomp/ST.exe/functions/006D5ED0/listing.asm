FUN_006d5ed0:
006D5ED0  55                        PUSH EBP
006D5ED1  8B EC                     MOV EBP,ESP
006D5ED3  83 EC 58                  SUB ESP,0x58
006D5ED6  53                        PUSH EBX
006D5ED7  56                        PUSH ESI
006D5ED8  8B F1                     MOV ESI,ECX
006D5EDA  57                        PUSH EDI
006D5EDB  85 F6                     TEST ESI,ESI
006D5EDD  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006D5EE0  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006D5EE3  8B 98 88 02 00 00         MOV EBX,dword ptr [EAX + 0x288]
006D5EE9  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006D5EEC  74 05                     JZ 0x006d5ef3
006D5EEE  8D 7E 10                  LEA EDI,[ESI + 0x10]
006D5EF1  EB 02                     JMP 0x006d5ef5
LAB_006d5ef3:
006D5EF3  33 FF                     XOR EDI,EDI
LAB_006d5ef5:
006D5EF5  57                        PUSH EDI
006D5EF6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006D5EF9  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006D5EFF  8B CE                     MOV ECX,ESI
006D5F01  E8 0F 35 07 00            CALL 0x00749415
006D5F06  85 C0                     TEST EAX,EAX
006D5F08  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D5F0B  7D 12                     JGE 0x006d5f1f
006D5F0D  57                        PUSH EDI
006D5F0E  8B F0                     MOV ESI,EAX
006D5F10  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D5F16  8B C6                     MOV EAX,ESI
006D5F18  5F                        POP EDI
006D5F19  5E                        POP ESI
006D5F1A  5B                        POP EBX
006D5F1B  8B E5                     MOV ESP,EBP
006D5F1D  5D                        POP EBP
006D5F1E  C3                        RET
LAB_006d5f1f:
006D5F1F  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
006D5F22  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006D5F25  3B C8                     CMP ECX,EAX
006D5F27  0F 8D F1 00 00 00         JGE 0x006d601e
LAB_006d5f2d:
006D5F2D  8B 56 58                  MOV EDX,dword ptr [ESI + 0x58]
006D5F30  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006D5F33  8B 7A 44                  MOV EDI,dword ptr [EDX + 0x44]
006D5F36  8B 88 10 03 00 00         MOV ECX,dword ptr [EAX + 0x310]
006D5F3C  83 C7 30                  ADD EDI,0x30
006D5F3F  85 C9                     TEST ECX,ECX
006D5F41  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006D5F44  75 68                     JNZ 0x006d5fae
006D5F46  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006D5F4C  8D 45 AC                  LEA EAX,[EBP + -0x54]
006D5F4F  8D 55 A8                  LEA EDX,[EBP + -0x58]
006D5F52  6A 00                     PUSH 0x0
006D5F54  50                        PUSH EAX
006D5F55  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006D5F58  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006D5F5E  E8 8D 78 05 00            CALL 0x0072d7f0
006D5F63  8B F0                     MOV ESI,EAX
006D5F65  83 C4 08                  ADD ESP,0x8
006D5F68  85 F6                     TEST ESI,ESI
006D5F6A  0F 85 C1 00 00 00         JNZ 0x006d6031
006D5F70  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006D5F73  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006D5F76  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006D5F79  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
006D5F7C  85 C0                     TEST EAX,EAX
006D5F7E  75 23                     JNZ 0x006d5fa3
006D5F80  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006D5F83  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006D5F86  99                        CDQ
006D5F87  83 E1 0C                  AND ECX,0xc
006D5F8A  33 C2                     XOR EAX,EDX
006D5F8C  51                        PUSH ECX
006D5F8D  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
006D5F90  2B C2                     SUB EAX,EDX
006D5F92  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006D5F95  6A 00                     PUSH 0x0
006D5F97  50                        PUSH EAX
006D5F98  8D 46 64                  LEA EAX,[ESI + 0x64]
006D5F9B  52                        PUSH EDX
006D5F9C  50                        PUSH EAX
006D5F9D  51                        PUSH ECX
006D5F9E  E8 AD E3 FE FF            CALL 0x006c4350
LAB_006d5fa3:
006D5FA3  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006D5FA6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006D5FAC  EB 09                     JMP 0x006d5fb7
LAB_006d5fae:
006D5FAE  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
006D5FB1  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006D5FB4  89 4E 64                  MOV dword ptr [ESI + 0x64],ECX
LAB_006d5fb7:
006D5FB7  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006D5FBA  6A 48                     PUSH 0x48
006D5FBC  81 C9 00 00 00 02         OR ECX,0x2000000
006D5FC2  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
006D5FC5  E8 66 85 05 00            CALL 0x0072e530
006D5FCA  83 C4 04                  ADD ESP,0x4
006D5FCD  85 C0                     TEST EAX,EAX
006D5FCF  74 18                     JZ 0x006d5fe9
006D5FD1  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
006D5FD4  8B 4E 64                  MOV ECX,dword ptr [ESI + 0x64]
006D5FD7  52                        PUSH EDX
006D5FD8  8D 55 EC                  LEA EDX,[EBP + -0x14]
006D5FDB  51                        PUSH ECX
006D5FDC  52                        PUSH EDX
006D5FDD  6A 00                     PUSH 0x0
006D5FDF  56                        PUSH ESI
006D5FE0  8B C8                     MOV ECX,EAX
006D5FE2  E8 79 01 00 00            CALL 0x006d6160
006D5FE7  EB 02                     JMP 0x006d5feb
LAB_006d5fe9:
006D5FE9  33 C0                     XOR EAX,EAX
LAB_006d5feb:
006D5FEB  33 C9                     XOR ECX,ECX
006D5FED  89 46 60                  MOV dword ptr [ESI + 0x60],EAX
006D5FF0  3B C1                     CMP EAX,ECX
006D5FF2  74 59                     JZ 0x006d604d
006D5FF4  89 4E 6C                  MOV dword ptr [ESI + 0x6c],ECX
006D5FF7  89 4E 68                  MOV dword ptr [ESI + 0x68],ECX
006D5FFA  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006D5FFD  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
006D6000  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
006D6003  8B 7E 2C                  MOV EDI,dword ptr [ESI + 0x2c]
006D6006  47                        INC EDI
006D6007  89 7E 2C                  MOV dword ptr [ESI + 0x2c],EDI
006D600A  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006D600D  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006D6010  42                        INC EDX
006D6011  8B C2                     MOV EAX,EDX
006D6013  89 56 3C                  MOV dword ptr [ESI + 0x3c],EDX
006D6016  3B C1                     CMP EAX,ECX
006D6018  0F 8C 0F FF FF FF         JL 0x006d5f2d
LAB_006d601e:
006D601E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D6021  50                        PUSH EAX
006D6022  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D6028  33 C0                     XOR EAX,EAX
006D602A  5F                        POP EDI
006D602B  5E                        POP ESI
006D602C  5B                        POP EBX
006D602D  8B E5                     MOV ESP,EBP
006D602F  5D                        POP EBP
006D6030  C3                        RET
LAB_006d6031:
006D6031  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D6034  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006D6037  50                        PUSH EAX
006D6038  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006D603E  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D6044  8B C6                     MOV EAX,ESI
006D6046  5F                        POP EDI
006D6047  5E                        POP ESI
006D6048  5B                        POP EBX
006D6049  8B E5                     MOV ESP,EBP
006D604B  5D                        POP EBP
006D604C  C3                        RET
LAB_006d604d:
006D604D  8B 56 5C                  MOV EDX,dword ptr [ESI + 0x5c]
006D6050  39 8A 10 03 00 00         CMP dword ptr [EDX + 0x310],ECX
006D6056  75 14                     JNZ 0x006d606c
006D6058  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006D605B  3B C1                     CMP EAX,ECX
006D605D  74 0D                     JZ 0x006d606c
006D605F  8B 08                     MOV ECX,dword ptr [EAX]
006D6061  50                        PUSH EAX
006D6062  FF 51 08                  CALL dword ptr [ECX + 0x8]
006D6065  C7 46 64 00 00 00 00      MOV dword ptr [ESI + 0x64],0x0
LAB_006d606c:
006D606C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006D606F  52                        PUSH EDX
006D6070  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D6076  5F                        POP EDI
006D6077  5E                        POP ESI
006D6078  B8 0E 00 07 80            MOV EAX,0x8007000e
006D607D  5B                        POP EBX
006D607E  8B E5                     MOV ESP,EBP
006D6080  5D                        POP EBP
006D6081  C3                        RET
