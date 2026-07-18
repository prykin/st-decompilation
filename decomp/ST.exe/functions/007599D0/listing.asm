FUN_007599d0:
007599D0  55                        PUSH EBP
007599D1  8B EC                     MOV EBP,ESP
007599D3  51                        PUSH ECX
007599D4  53                        PUSH EBX
007599D5  56                        PUSH ESI
007599D6  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007599D9  57                        PUSH EDI
007599DA  33 FF                     XOR EDI,EDI
007599DC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
007599DF  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
007599E2  0F AF D0                  IMUL EDX,EAX
007599E5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007599E8  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
007599EB  85 C0                     TEST EAX,EAX
007599ED  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
007599F0  7E 77                     JLE 0x00759a69
007599F2  EB 03                     JMP 0x007599f7
LAB_007599f4:
007599F4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_007599f7:
007599F7  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
007599FA  2B C7                     SUB EAX,EDI
007599FC  3B C8                     CMP ECX,EAX
007599FE  7D 02                     JGE 0x00759a02
00759A00  8B C1                     MOV EAX,ECX
LAB_00759a02:
00759A02  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00759A05  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
00759A08  03 CF                     ADD ECX,EDI
00759A0A  2B D9                     SUB EBX,ECX
00759A0C  3B C3                     CMP EAX,EBX
00759A0E  7C 02                     JL 0x00759a12
00759A10  8B C3                     MOV EAX,EBX
LAB_00759a12:
00759A12  8B 5E 04                  MOV EBX,dword ptr [ESI + 0x4]
00759A15  2B D9                     SUB EBX,ECX
00759A17  3B C3                     CMP EAX,EBX
00759A19  7C 02                     JL 0x00759a1d
00759A1B  8B C3                     MOV EAX,EBX
LAB_00759a1d:
00759A1D  85 C0                     TEST EAX,EAX
00759A1F  7E 48                     JLE 0x00759a69
00759A21  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
00759A25  8B D8                     MOV EBX,EAX
00759A27  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00759A2A  85 C0                     TEST EAX,EAX
00759A2C  74 15                     JZ 0x00759a43
00759A2E  8B 06                     MOV EAX,dword ptr [ESI]
00759A30  53                        PUSH EBX
00759A31  52                        PUSH EDX
00759A32  8D 56 30                  LEA EDX,[ESI + 0x30]
00759A35  8B 0C B8                  MOV ECX,dword ptr [EAX + EDI*0x4]
00759A38  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759A3B  51                        PUSH ECX
00759A3C  52                        PUSH EDX
00759A3D  50                        PUSH EAX
00759A3E  FF 56 34                  CALL dword ptr [ESI + 0x34]
00759A41  EB 12                     JMP 0x00759a55
LAB_00759a43:
00759A43  8B 0E                     MOV ECX,dword ptr [ESI]
00759A45  53                        PUSH EBX
00759A46  52                        PUSH EDX
00759A47  8D 46 30                  LEA EAX,[ESI + 0x30]
00759A4A  8B 14 B9                  MOV EDX,dword ptr [ECX + EDI*0x4]
00759A4D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00759A50  52                        PUSH EDX
00759A51  50                        PUSH EAX
00759A52  51                        PUSH ECX
00759A53  FF 10                     CALL dword ptr [EAX]
LAB_00759a55:
00759A55  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00759A58  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00759A5B  03 C3                     ADD EAX,EBX
00759A5D  03 FA                     ADD EDI,EDX
00759A5F  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00759A62  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00759A65  3B F8                     CMP EDI,EAX
00759A67  7C 8B                     JL 0x007599f4
LAB_00759a69:
00759A69  5F                        POP EDI
00759A6A  5E                        POP ESI
00759A6B  5B                        POP EBX
00759A6C  8B E5                     MOV ESP,EBP
00759A6E  5D                        POP EBP
00759A6F  C2 0C 00                  RET 0xc
