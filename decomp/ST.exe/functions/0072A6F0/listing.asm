FUN_0072a6f0:
0072A6F0  55                        PUSH EBP
0072A6F1  8B EC                     MOV EBP,ESP
0072A6F3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072A6F6  53                        PUSH EBX
0072A6F7  56                        PUSH ESI
0072A6F8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0072A6FB  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072A6FE  57                        PUSH EDI
0072A6FF  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0072A702  3B F9                     CMP EDI,ECX
0072A704  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0072A707  7D 64                     JGE 0x0072a76d
LAB_0072a709:
0072A709  8B 10                     MOV EDX,dword ptr [EAX]
0072A70B  4A                        DEC EDX
0072A70C  89 10                     MOV dword ptr [EAX],EDX
0072A70E  78 5D                     JS 0x0072a76d
0072A710  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0072A713  46                        INC ESI
0072A714  83 C1 02                  ADD ECX,0x2
0072A717  D1 EA                     SHR EDX,0x1
0072A719  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
0072A71C  75 07                     JNZ 0x0072a725
0072A71E  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072a725:
0072A725  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0072A728  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072A72B  03 DA                     ADD EBX,EDX
0072A72D  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072A730  8B D3                     MOV EDX,EBX
0072A732  C1 EB 10                  SHR EBX,0x10
0072A735  74 21                     JZ 0x0072a758
0072A737  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072A73A  81 E2 FF FF 00 00         AND EDX,0xffff
0072A740  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
0072A743  03 F3                     ADD ESI,EBX
0072A745  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0072A748  8D 57 01                  LEA EDX,[EDI + 0x1]
0072A74B  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0072A74E  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0072A751  3B D7                     CMP EDX,EDI
0072A753  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
0072A756  7D 15                     JGE 0x0072a76d
LAB_0072a758:
0072A758  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0072A75B  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
0072A75E  03 FA                     ADD EDI,EDX
0072A760  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0072A763  89 78 18                  MOV dword ptr [EAX + 0x18],EDI
0072A766  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0072A769  3B FA                     CMP EDI,EDX
0072A76B  7C 9C                     JL 0x0072a709
LAB_0072a76d:
0072A76D  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0072A770  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0072A773  3B D7                     CMP EDX,EDI
0072A775  0F 8D 8B 00 00 00         JGE 0x0072a806
0072A77B  8B 10                     MOV EDX,dword ptr [EAX]
0072A77D  4A                        DEC EDX
0072A77E  89 10                     MOV dword ptr [EAX],EDX
0072A780  0F 88 80 00 00 00         JS 0x0072a806
0072A786  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
LAB_0072a789:
0072A789  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0072A78C  8B 58 24                  MOV EBX,dword ptr [EAX + 0x24]
0072A78F  85 D3                     TEST EBX,EDX
0072A791  74 18                     JZ 0x0072a7ab
0072A793  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
0072A796  33 DB                     XOR EBX,EBX
0072A798  66 8B 19                  MOV BX,word ptr [ECX]
0072A79B  C1 FA 10                  SAR EDX,0x10
0072A79E  3B D3                     CMP EDX,EBX
0072A7A0  7D 09                     JGE 0x0072a7ab
0072A7A2  33 D2                     XOR EDX,EDX
0072A7A4  8A 16                     MOV DL,byte ptr [ESI]
0072A7A6  8A 14 3A                  MOV DL,byte ptr [EDX + EDI*0x1]
0072A7A9  88 16                     MOV byte ptr [ESI],DL
LAB_0072a7ab:
0072A7AB  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0072A7AE  D1 EA                     SHR EDX,0x1
0072A7B0  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
0072A7B3  75 07                     JNZ 0x0072a7bc
0072A7B5  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072a7bc:
0072A7BC  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0072A7BF  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072A7C2  03 DA                     ADD EBX,EDX
0072A7C4  46                        INC ESI
0072A7C5  83 C1 02                  ADD ECX,0x2
0072A7C8  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072A7CB  8B D3                     MOV EDX,EBX
0072A7CD  C1 EB 10                  SHR EBX,0x10
0072A7D0  74 22                     JZ 0x0072a7f4
0072A7D2  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072A7D5  81 E2 FF FF 00 00         AND EDX,0xffff
0072A7DB  03 F3                     ADD ESI,EBX
0072A7DD  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0072A7E0  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
0072A7E3  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0072A7E6  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
0072A7E9  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0072A7EC  42                        INC EDX
0072A7ED  3B D3                     CMP EDX,EBX
0072A7EF  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0072A7F2  7D 12                     JGE 0x0072a806
LAB_0072a7f4:
0072A7F4  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0072A7F7  8B 58 18                  MOV EBX,dword ptr [EAX + 0x18]
0072A7FA  03 DA                     ADD EBX,EDX
0072A7FC  8B 10                     MOV EDX,dword ptr [EAX]
0072A7FE  4A                        DEC EDX
0072A7FF  89 58 18                  MOV dword ptr [EAX + 0x18],EBX
0072A802  89 10                     MOV dword ptr [EAX],EDX
0072A804  79 83                     JNS 0x0072a789
LAB_0072a806:
0072A806  5F                        POP EDI
0072A807  5E                        POP ESI
0072A808  5B                        POP EBX
0072A809  5D                        POP EBP
0072A80A  C3                        RET
