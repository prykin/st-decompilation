FUN_00748b48:
00748B48  53                        PUSH EBX
00748B49  56                        PUSH ESI
00748B4A  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
00748B4E  57                        PUSH EDI
00748B4F  33 FF                     XOR EDI,EDI
00748B51  83 7E 44 01               CMP dword ptr [ESI + 0x44],0x1
00748B55  8D 46 44                  LEA EAX,[ESI + 0x44]
00748B58  75 06                     JNZ 0x00748b60
00748B5A  33 DB                     XOR EBX,EBX
00748B5C  89 38                     MOV dword ptr [EAX],EDI
00748B5E  EB 09                     JMP 0x00748b69
LAB_00748b60:
00748B60  50                        PUSH EAX
00748B61  FF 15 70 BC 85 00         CALL dword ptr [0x0085bc70]
00748B67  8B D8                     MOV EBX,EAX
LAB_00748b69:
00748B69  3B DF                     CMP EBX,EDI
00748B6B  75 23                     JNZ 0x00748b90
00748B6D  F6 46 04 08               TEST byte ptr [ESI + 0x4],0x8
00748B71  74 07                     JZ 0x00748b7a
00748B73  8B 06                     MOV EAX,dword ptr [ESI]
00748B75  57                        PUSH EDI
00748B76  56                        PUSH ESI
00748B77  FF 50 38                  CALL dword ptr [EAX + 0x38]
LAB_00748b7a:
00748B7A  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00748B7D  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00748B80  83 C0 0C                  ADD EAX,0xc
00748B83  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
00748B86  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
00748B89  56                        PUSH ESI
00748B8A  8B 08                     MOV ECX,dword ptr [EAX]
00748B8C  50                        PUSH EAX
00748B8D  FF 51 20                  CALL dword ptr [ECX + 0x20]
LAB_00748b90:
00748B90  5F                        POP EDI
00748B91  8B C3                     MOV EAX,EBX
00748B93  5E                        POP ESI
00748B94  5B                        POP EBX
00748B95  C2 04 00                  RET 0x4
