FUN_00749ec2:
00749EC2  55                        PUSH EBP
00749EC3  8B EC                     MOV EBP,ESP
00749EC5  51                        PUSH ECX
00749EC6  51                        PUSH ECX
00749EC7  53                        PUSH EBX
00749EC8  56                        PUSH ESI
00749EC9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00749ECC  57                        PUSH EDI
00749ECD  8D 7E 70                  LEA EDI,[ESI + 0x70]
00749ED0  57                        PUSH EDI
00749ED1  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00749ED4  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
00749EDA  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00749EDD  6A 01                     PUSH 0x1
00749EDF  5B                        POP EBX
00749EE0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00749EE3  3B C3                     CMP EAX,EBX
00749EE5  74 0C                     JZ 0x00749ef3
00749EE7  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00749EEA  83 78 18 00               CMP dword ptr [EAX + 0x18],0x0
00749EEE  75 12                     JNZ 0x00749f02
00749EF0  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
LAB_00749ef3:
00749EF3  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
00749EF6  8D 4E F4                  LEA ECX,[ESI + -0xc]
00749EF9  53                        PUSH EBX
00749EFA  FF 50 30                  CALL dword ptr [EAX + 0x30]
00749EFD  8B F0                     MOV ESI,EAX
00749EFF  57                        PUSH EDI
00749F00  EB 77                     JMP 0x00749f79
LAB_00749f02:
00749F02  56                        PUSH ESI
00749F03  E8 DD D1 FF FF            CALL 0x007470e5
00749F08  85 C0                     TEST EAX,EAX
00749F0A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00749F0D  7D 0C                     JGE 0x00749f1b
00749F0F  57                        PUSH EDI
00749F10  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749F16  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00749F19  EB 66                     JMP 0x00749f81
LAB_00749f1b:
00749F1B  8D 7E F4                  LEA EDI,[ESI + -0xc]
00749F1E  53                        PUSH EBX
00749F1F  8B CF                     MOV ECX,EDI
00749F21  E8 F7 08 00 00            CALL 0x0074a81d
00749F26  8B 07                     MOV EAX,dword ptr [EDI]
00749F28  8B CF                     MOV ECX,EDI
00749F2A  FF 90 80 00 00 00         CALL dword ptr [EAX + 0x80]
00749F30  8B 07                     MOV EAX,dword ptr [EDI]
00749F32  53                        PUSH EBX
00749F33  8B CF                     MOV ECX,EDI
00749F35  FF 50 28                  CALL dword ptr [EAX + 0x28]
00749F38  8B 07                     MOV EAX,dword ptr [EDI]
00749F3A  8B CF                     MOV ECX,EDI
00749F3C  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
00749F3F  8B CF                     MOV ECX,EDI
00749F41  E8 1A 08 00 00            CALL 0x0074a760
00749F46  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00749F49  8B 80 9C 00 00 00         MOV EAX,dword ptr [EAX + 0x9c]
00749F4F  85 C0                     TEST EAX,EAX
00749F51  74 06                     JZ 0x00749f59
00749F53  8B 08                     MOV ECX,dword ptr [EAX]
00749F55  50                        PUSH EAX
00749F56  FF 51 14                  CALL dword ptr [ECX + 0x14]
LAB_00749f59:
00749F59  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00749F5D  75 0B                     JNZ 0x00749f6a
00749F5F  83 66 54 00               AND dword ptr [ESI + 0x54],0x0
00749F63  8B 07                     MOV EAX,dword ptr [EDI]
00749F65  8B CF                     MOV ECX,EDI
00749F67  FF 50 70                  CALL dword ptr [EAX + 0x70]
LAB_00749f6a:
00749F6A  8B 07                     MOV EAX,dword ptr [EDI]
00749F6C  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00749F6F  8B CF                     MOV ECX,EDI
00749F71  FF 50 30                  CALL dword ptr [EAX + 0x30]
00749F74  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
00749F77  8B F0                     MOV ESI,EAX
LAB_00749f79:
00749F79  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749F7F  8B C6                     MOV EAX,ESI
LAB_00749f81:
00749F81  5F                        POP EDI
00749F82  5E                        POP ESI
00749F83  5B                        POP EBX
00749F84  C9                        LEAVE
00749F85  C2 04 00                  RET 0x4
