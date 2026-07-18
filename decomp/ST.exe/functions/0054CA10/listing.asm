FUN_0054ca10:
0054CA10  55                        PUSH EBP
0054CA11  8B EC                     MOV EBP,ESP
0054CA13  8B 0D 9C 87 80 00         MOV ECX,dword ptr [0x0080879c]
0054CA19  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054CA1C  53                        PUSH EBX
0054CA1D  8B D8                     MOV EBX,EAX
0054CA1F  85 C9                     TEST ECX,ECX
0054CA21  75 35                     JNZ 0x0054ca58
0054CA23  8B 0D A0 87 80 00         MOV ECX,dword ptr [0x008087a0]
0054CA29  81 E1 FF 00 00 00         AND ECX,0xff
0054CA2F  49                        DEC ECX
0054CA30  83 F9 12                  CMP ECX,0x12
0054CA33  77 23                     JA 0x0054ca58
0054CA35  33 D2                     XOR EDX,EDX
0054CA37  8A 91 E0 CA 54 00         MOV DL,byte ptr [ECX + 0x54cae0]
switchD_0054ca3d::switchD:
0054CA3D  FF 24 95 D4 CA 54 00      JMP dword ptr [EDX*0x4 + 0x54cad4]
switchD_0054ca3d::caseD_1:
0054CA44  80 3D 9B 8A 80 00 FF      CMP byte ptr [0x00808a9b],0xff
0054CA4B  74 0B                     JZ 0x0054ca58
switchD_0054ca3d::caseD_6:
0054CA4D  83 78 08 01               CMP dword ptr [EAX + 0x8],0x1
0054CA51  75 05                     JNZ 0x0054ca58
0054CA53  33 C0                     XOR EAX,EAX
0054CA55  5B                        POP EBX
0054CA56  5D                        POP EBP
0054CA57  C3                        RET
switchD_0054ca3d::caseD_2:
0054CA58  56                        PUSH ESI
0054CA59  57                        PUSH EDI
0054CA5A  8B 3D B0 83 7C 00         MOV EDI,dword ptr [0x007c83b0]
0054CA60  83 C9 FF                  OR ECX,0xffffffff
0054CA63  33 C0                     XOR EAX,EAX
0054CA65  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0054CA68  F2 AE                     SCASB.REPNE ES:EDI
0054CA6A  F7 D1                     NOT ECX
0054CA6C  49                        DEC ECX
0054CA6D  6A 0A                     PUSH 0xa
0054CA6F  03 CE                     ADD ECX,ESI
0054CA71  6A 00                     PUSH 0x0
0054CA73  51                        PUSH ECX
0054CA74  E8 F7 CC 16 00            CALL 0x006b9770
0054CA79  8B 0D 3C 2A 80 00         MOV ECX,dword ptr [0x00802a3c]
0054CA7F  8B F0                     MOV ESI,EAX
0054CA81  41                        INC ECX
0054CA82  89 0D 3C 2A 80 00         MOV dword ptr [0x00802a3c],ECX
0054CA88  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0054CA8E  85 C9                     TEST ECX,ECX
0054CA90  74 0F                     JZ 0x0054caa1
0054CA92  A1 3C 2A 80 00            MOV EAX,[0x00802a3c]
0054CA97  6A 00                     PUSH 0x0
0054CA99  50                        PUSH EAX
0054CA9A  6A 01                     PUSH 0x1
0054CA9C  E8 D1 69 EB FF            CALL 0x00403472
LAB_0054caa1:
0054CAA1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0054CAA4  8B 13                     MOV EDX,dword ptr [EBX]
0054CAA6  6A 00                     PUSH 0x0
0054CAA8  51                        PUSH ECX
0054CAA9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0054CAAC  6A 00                     PUSH 0x0
0054CAAE  6A 00                     PUSH 0x0
0054CAB0  52                        PUSH EDX
0054CAB1  56                        PUSH ESI
0054CAB2  E8 24 83 EB FF            CALL 0x00404ddb
0054CAB7  8B F0                     MOV ESI,EAX
0054CAB9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054CABC  85 C0                     TEST EAX,EAX
0054CABE  74 0C                     JZ 0x0054cacc
0054CAC0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0054CAC3  8D 45 08                  LEA EAX,[EBP + 0x8]
0054CAC6  50                        PUSH EAX
0054CAC7  E8 14 56 1A 00            CALL 0x006f20e0
LAB_0054cacc:
0054CACC  8B C6                     MOV EAX,ESI
0054CACE  5F                        POP EDI
0054CACF  5E                        POP ESI
0054CAD0  5B                        POP EBX
0054CAD1  5D                        POP EBP
0054CAD2  C3                        RET
