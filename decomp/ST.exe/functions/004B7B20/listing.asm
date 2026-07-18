FUN_004b7b20:
004B7B20  55                        PUSH EBP
004B7B21  8B EC                     MOV EBP,ESP
004B7B23  53                        PUSH EBX
004B7B24  56                        PUSH ESI
004B7B25  8B F1                     MOV ESI,ECX
004B7B27  57                        PUSH EDI
004B7B28  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B7B2E  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004B7B34  50                        PUSH EAX
004B7B35  E8 7D CE F4 FF            CALL 0x004049b7
004B7B3A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B7B3D  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004B7B43  25 FF 00 00 00            AND EAX,0xff
004B7B48  48                        DEC EAX
004B7B49  83 FA 0C                  CMP EDX,0xc
004B7B4C  0F 84 05 01 00 00         JZ 0x004b7c57
004B7B52  0F 8E 3D 01 00 00         JLE 0x004b7c95
004B7B58  83 FA 0E                  CMP EDX,0xe
004B7B5B  0F 8F 34 01 00 00         JG 0x004b7c95
004B7B61  8B 96 D0 04 00 00         MOV EDX,dword ptr [ESI + 0x4d0]
004B7B67  4A                        DEC EDX
004B7B68  0F 84 A4 00 00 00         JZ 0x004b7c12
004B7B6E  4A                        DEC EDX
004B7B6F  74 74                     JZ 0x004b7be5
004B7B71  4A                        DEC EDX
004B7B72  74 2C                     JZ 0x004b7ba0
004B7B74  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004B7B7A  5F                        POP EDI
004B7B7B  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
004B7B7E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B7B81  03 F2                     ADD ESI,EDX
004B7B83  8D 14 B0                  LEA EDX,[EAX + ESI*0x4]
004B7B86  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004B7B8D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004B7B90  5E                        POP ESI
004B7B91  8B 04 D0                  MOV EAX,dword ptr [EAX + EDX*0x8]
004B7B94  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B7B97  89 01                     MOV dword ptr [ECX],EAX
004B7B99  5B                        POP EBX
004B7B9A  89 02                     MOV dword ptr [EDX],EAX
004B7B9C  5D                        POP EBP
004B7B9D  C2 10 00                  RET 0x10
LAB_004b7ba0:
004B7BA0  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004B7BA6  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004B7BAD  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004B7BB0  03 D7                     ADD EDX,EDI
004B7BB2  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004B7BB5  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004B7BB8  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004B7BBB  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004B7BBE  89 13                     MOV dword ptr [EBX],EDX
004B7BC0  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004B7BC6  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004B7BC9  03 F0                     ADD ESI,EAX
004B7BCB  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004B7BD2  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004B7BD5  5F                        POP EDI
004B7BD6  5E                        POP ESI
004B7BD7  5B                        POP EBX
004B7BD8  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004B7BDC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004B7BDF  89 0A                     MOV dword ptr [EDX],ECX
004B7BE1  5D                        POP EBP
004B7BE2  C2 10 00                  RET 0x10
LAB_004b7be5:
004B7BE5  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004B7BEB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B7BEE  8B 0C 8D 70 51 7B 00      MOV ECX,dword ptr [ECX*0x4 + 0x7b5170]
004B7BF5  5F                        POP EDI
004B7BF6  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004B7BF9  03 F0                     ADD ESI,EAX
004B7BFB  8D 04 B2                  LEA EAX,[EDX + ESI*0x4]
004B7BFE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B7C01  5E                        POP ESI
004B7C02  5B                        POP EBX
004B7C03  8B 44 C1 04               MOV EAX,dword ptr [ECX + EAX*0x8 + 0x4]
004B7C07  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004B7C0A  89 02                     MOV dword ptr [EDX],EAX
004B7C0C  89 01                     MOV dword ptr [ECX],EAX
004B7C0E  5D                        POP EBP
004B7C0F  C2 10 00                  RET 0x10
LAB_004b7c12:
004B7C12  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004B7C18  8B 1C 8D 70 51 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b5170]
004B7C1F  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004B7C22  03 D7                     ADD EDX,EDI
004B7C24  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004B7C27  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004B7C2A  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004B7C2D  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004B7C30  89 13                     MOV dword ptr [EBX],EDX
004B7C32  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004B7C38  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004B7C3B  03 F0                     ADD ESI,EAX
004B7C3D  8B 04 8D 70 51 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b5170]
004B7C44  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004B7C47  5F                        POP EDI
004B7C48  5E                        POP ESI
004B7C49  5B                        POP EBX
004B7C4A  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004B7C4E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B7C51  89 0A                     MOV dword ptr [EDX],ECX
004B7C53  5D                        POP EBP
004B7C54  C2 10 00                  RET 0x10
LAB_004b7c57:
004B7C57  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004B7C5D  8B 1C 8D 10 83 7B 00      MOV EBX,dword ptr [ECX*0x4 + 0x7b8310]
004B7C64  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004B7C67  03 D7                     ADD EDX,EDI
004B7C69  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004B7C6C  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
004B7C6F  8B 14 D3                  MOV EDX,dword ptr [EBX + EDX*0x8]
004B7C72  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004B7C75  89 13                     MOV dword ptr [EBX],EDX
004B7C77  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004B7C7D  8D 04 70                  LEA EAX,[EAX + ESI*0x2]
004B7C80  03 F0                     ADD ESI,EAX
004B7C82  8B 04 8D 10 83 7B 00      MOV EAX,dword ptr [ECX*0x4 + 0x7b8310]
004B7C89  8D 14 B7                  LEA EDX,[EDI + ESI*0x4]
004B7C8C  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
004B7C90  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004B7C93  89 0A                     MOV dword ptr [EDX],ECX
LAB_004b7c95:
004B7C95  5F                        POP EDI
004B7C96  5E                        POP ESI
004B7C97  5B                        POP EBX
004B7C98  5D                        POP EBP
004B7C99  C2 10 00                  RET 0x10
