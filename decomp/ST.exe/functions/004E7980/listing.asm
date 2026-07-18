FUN_004e7980:
004E7980  55                        PUSH EBP
004E7981  8B EC                     MOV EBP,ESP
004E7983  83 EC 18                  SUB ESP,0x18
004E7986  53                        PUSH EBX
004E7987  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E798A  85 DB                     TEST EBX,EBX
004E798C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004E798F  0F 8C FA 02 00 00         JL 0x004e7c8f
004E7995  83 FB 08                  CMP EBX,0x8
004E7998  0F 8D F1 02 00 00         JGE 0x004e7c8f
004E799E  56                        PUSH ESI
004E799F  57                        PUSH EDI
004E79A0  53                        PUSH EBX
004E79A1  E8 11 D0 F1 FF            CALL 0x004049b7
004E79A6  25 FF 00 00 00            AND EAX,0xff
004E79AB  B9 C3 00 00 00            MOV ECX,0xc3
004E79B0  48                        DEC EAX
004E79B1  BF 20 10 80 00            MOV EDI,0x801020
004E79B6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E79B9  33 C0                     XOR EAX,EAX
004E79BB  F3 AB                     STOSD.REP ES:EDI
004E79BD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E79C0  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
004E79C3  A3 20 10 80 00            MOV [0x00801020],EAX
004E79C8  88 0D 24 10 80 00         MOV byte ptr [0x00801024],CL
LAB_004e79ce:
004E79CE  B9 C3 00 00 00            MOV ECX,0xc3
004E79D3  33 C0                     XOR EAX,EAX
004E79D5  BF D0 0B 80 00            MOV EDI,0x800bd0
004E79DA  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
004E79E1  F3 AB                     STOSD.REP ES:EDI
004E79E3  A1 20 10 80 00            MOV EAX,[0x00801020]
004E79E8  85 C0                     TEST EAX,EAX
004E79EA  0F 84 94 02 00 00         JZ 0x004e7c84
004E79F0  B8 20 10 80 00            MOV EAX,0x801020
004E79F5  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_004e79f8:
004E79F8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E79FB  33 D2                     XOR EDX,EDX
004E79FD  8A 51 04                  MOV DL,byte ptr [ECX + 0x4]
004E7A00  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004E7A03  52                        PUSH EDX
004E7A04  8B 10                     MOV EDX,dword ptr [EAX]
004E7A06  52                        PUSH EDX
004E7A07  53                        PUSH EBX
004E7A08  E8 11 C8 F1 FF            CALL 0x0040421e
004E7A0D  BF D4 0D 7C 00            MOV EDI,0x7c0dd4
LAB_004e7a12:
004E7A12  8A 47 01                  MOV AL,byte ptr [EDI + 0x1]
004E7A15  BE 01 00 00 00            MOV ESI,0x1
004E7A1A  84 C0                     TEST AL,AL
004E7A1C  74 42                     JZ 0x004e7a60
LAB_004e7a1e:
004E7A1E  83 FE 03                  CMP ESI,0x3
004E7A21  7D 3D                     JGE 0x004e7a60
004E7A23  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
004E7A26  33 C0                     XOR EAX,EAX
004E7A28  8A 04 37                  MOV AL,byte ptr [EDI + ESI*0x1]
004E7A2B  8D 14 CB                  LEA EDX,[EBX + ECX*0x8]
004E7A2E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
004E7A31  8D 04 53                  LEA EAX,[EBX + EDX*0x2]
004E7A34  C1 E0 04                  SHL EAX,0x4
004E7A37  03 C3                     ADD EAX,EBX
004E7A39  8D 0C 45 0B 51 7F 00      LEA ECX,[EAX*0x2 + 0x7f510b]
004E7A40  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004E7A43  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E7A46  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E7A49  80 F2 07                  XOR DL,0x7
004E7A4C  33 C0                     XOR EAX,EAX
004E7A4E  0F A3 11                  BT [ECX],EDX
004E7A51  D0 D0                     RCL AL,0x1
004E7A53  85 C0                     TEST EAX,EAX
004E7A55  74 28                     JZ 0x004e7a7f
004E7A57  8A 44 37 01               MOV AL,byte ptr [EDI + ESI*0x1 + 0x1]
004E7A5B  46                        INC ESI
004E7A5C  84 C0                     TEST AL,AL
004E7A5E  75 BE                     JNZ 0x004e7a1e
LAB_004e7a60:
004E7A60  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
004E7A63  33 D2                     XOR EDX,EDX
004E7A65  8A 17                     MOV DL,byte ptr [EDI]
004E7A67  8D 0C C3                  LEA ECX,[EBX + EAX*0x8]
004E7A6A  8D 04 4B                  LEA EAX,[EBX + ECX*0x2]
004E7A6D  C1 E0 04                  SHL EAX,0x4
004E7A70  03 C3                     ADD EAX,EBX
004E7A72  D1 E0                     SHL EAX,0x1
004E7A74  C7 84 90 B3 53 7F 00 01 00 00 00  MOV dword ptr [EAX + EDX*0x4 + 0x7f53b3],0x1
LAB_004e7a7f:
004E7A7F  83 C7 03                  ADD EDI,0x3
004E7A82  81 FF 4C 0E 7C 00         CMP EDI,0x7c0e4c
004E7A88  7C 88                     JL 0x004e7a12
004E7A8A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E7A8D  C7 45 0C 42 00 00 00      MOV dword ptr [EBP + 0xc],0x42
004E7A94  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004E7A97  C1 E1 04                  SHL ECX,0x4
004E7A9A  03 C8                     ADD ECX,EAX
004E7A9C  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004E7A9F  8D 34 55 4C 0E 7C 00      LEA ESI,[EDX*0x2 + 0x7c0e4c]
LAB_004e7aa6:
004E7AA6  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
004E7AA9  BF 01 00 00 00            MOV EDI,0x1
004E7AAE  84 C0                     TEST AL,AL
004E7AB0  74 42                     JZ 0x004e7af4
LAB_004e7ab2:
004E7AB2  83 FF 03                  CMP EDI,0x3
004E7AB5  7D 3D                     JGE 0x004e7af4
004E7AB7  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
004E7ABA  33 C0                     XOR EAX,EAX
004E7ABC  8A 04 3E                  MOV AL,byte ptr [ESI + EDI*0x1]
004E7ABF  8D 14 CB                  LEA EDX,[EBX + ECX*0x8]
004E7AC2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004E7AC5  8D 04 53                  LEA EAX,[EBX + EDX*0x2]
004E7AC8  C1 E0 04                  SHL EAX,0x4
004E7ACB  03 C3                     ADD EAX,EBX
004E7ACD  8D 0C 45 0B 51 7F 00      LEA ECX,[EAX*0x2 + 0x7f510b]
004E7AD4  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
004E7AD7  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004E7ADA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E7ADD  80 F2 07                  XOR DL,0x7
004E7AE0  33 C0                     XOR EAX,EAX
004E7AE2  0F A3 11                  BT [ECX],EDX
004E7AE5  D0 D0                     RCL AL,0x1
004E7AE7  85 C0                     TEST EAX,EAX
004E7AE9  74 28                     JZ 0x004e7b13
004E7AEB  8A 44 3E 01               MOV AL,byte ptr [ESI + EDI*0x1 + 0x1]
004E7AEF  47                        INC EDI
004E7AF0  84 C0                     TEST AL,AL
004E7AF2  75 BE                     JNZ 0x004e7ab2
LAB_004e7af4:
004E7AF4  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
004E7AF7  33 D2                     XOR EDX,EDX
004E7AF9  8A 16                     MOV DL,byte ptr [ESI]
004E7AFB  8D 0C C3                  LEA ECX,[EBX + EAX*0x8]
004E7AFE  8D 04 4B                  LEA EAX,[EBX + ECX*0x2]
004E7B01  C1 E0 04                  SHL EAX,0x4
004E7B04  03 C3                     ADD EAX,EBX
004E7B06  D1 E0                     SHL EAX,0x1
004E7B08  C7 84 90 B3 53 7F 00 01 00 00 00  MOV dword ptr [EAX + EDX*0x4 + 0x7f53b3],0x1
LAB_004e7b13:
004E7B13  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E7B16  83 C6 03                  ADD ESI,0x3
004E7B19  48                        DEC EAX
004E7B1A  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004E7B1D  75 87                     JNZ 0x004e7aa6
004E7B1F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E7B22  8B 3C 8D C8 0D 7C 00      MOV EDI,dword ptr [ECX*0x4 + 0x7c0dc8]
004E7B29  83 3F 00                  CMP dword ptr [EDI],0x0
004E7B2C  0F 84 1F 01 00 00         JZ 0x004e7c51
004E7B32  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004E7B35  33 F6                     XOR ESI,ESI
004E7B37  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
004E7B3A  C7 45 0C 05 00 00 00      MOV dword ptr [EBP + 0xc],0x5
004E7B41  8D 94 80 D0 0B 80 00      LEA EDX,[EAX + EAX*0x4 + 0x800bd0]
004E7B48  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_004e7b4b:
004E7B4B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E7B4E  8B 04 37                  MOV EAX,dword ptr [EDI + ESI*0x1]
004E7B51  3B 01                     CMP EAX,dword ptr [ECX]
004E7B53  75 7E                     JNZ 0x004e7bd3
004E7B55  8A 54 37 04               MOV DL,byte ptr [EDI + ESI*0x1 + 0x4]
004E7B59  8A 41 04                  MOV AL,byte ptr [ECX + 0x4]
004E7B5C  3A D0                     CMP DL,AL
004E7B5E  75 73                     JNZ 0x004e7bd3
004E7B60  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E7B63  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
004E7B6A  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
004E7B71  83 3C 07 00               CMP dword ptr [EDI + EAX*0x1],0x0
004E7B75  74 4D                     JZ 0x004e7bc4
004E7B77  8D 7E 05                  LEA EDI,[ESI + 0x5]
LAB_004e7b7a:
004E7B7A  83 7D F4 04               CMP dword ptr [EBP + -0xc],0x4
004E7B7E  7D 3D                     JGE 0x004e7bbd
004E7B80  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E7B83  8B 34 8D C8 0D 7C 00      MOV ESI,dword ptr [ECX*0x4 + 0x7c0dc8]
004E7B8A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004E7B8D  8B 14 37                  MOV EDX,dword ptr [EDI + ESI*0x1]
004E7B90  52                        PUSH EDX
004E7B91  53                        PUSH EBX
004E7B92  E8 D4 9C F1 FF            CALL 0x0040186b
004E7B97  33 C9                     XOR ECX,ECX
004E7B99  8A 4C 37 04               MOV CL,byte ptr [EDI + ESI*0x1 + 0x4]
004E7B9D  3B C1                     CMP EAX,ECX
004E7B9F  7D 07                     JGE 0x004e7ba8
004E7BA1  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
LAB_004e7ba8:
004E7BA8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004E7BAB  8B 44 37 05               MOV EAX,dword ptr [EDI + ESI*0x1 + 0x5]
004E7BAF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E7BB2  83 C7 05                  ADD EDI,0x5
004E7BB5  42                        INC EDX
004E7BB6  85 C0                     TEST EAX,EAX
004E7BB8  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004E7BBB  75 BD                     JNZ 0x004e7b7a
LAB_004e7bbd:
004E7BBD  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004E7BC0  85 C0                     TEST EAX,EAX
004E7BC2  74 0F                     JZ 0x004e7bd3
LAB_004e7bc4:
004E7BC4  8B 11                     MOV EDX,dword ptr [ECX]
004E7BC6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004E7BC9  52                        PUSH EDX
004E7BCA  53                        PUSH EBX
004E7BCB  E8 CC C5 F1 FF            CALL 0x0040419c
004E7BD0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_004e7bd3:
004E7BD3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E7BD6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E7BD9  33 F6                     XOR ESI,ESI
004E7BDB  8B 3C 85 C8 0D 7C 00      MOV EDI,dword ptr [EAX*0x4 + 0x7c0dc8]
004E7BE2  83 3C 17 00               CMP dword ptr [EDI + EDX*0x1],0x0
004E7BE6  74 4B                     JZ 0x004e7c33
004E7BE8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E7BEB  8D 44 07 05               LEA EAX,[EDI + EAX*0x1 + 0x5]
LAB_004e7bef:
004E7BEF  83 FE 04                  CMP ESI,0x4
004E7BF2  7D 3F                     JGE 0x004e7c33
004E7BF4  8B 10                     MOV EDX,dword ptr [EAX]
004E7BF6  3B 11                     CMP EDX,dword ptr [ECX]
004E7BF8  75 08                     JNZ 0x004e7c02
004E7BFA  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
004E7BFD  3A 51 04                  CMP DL,byte ptr [ECX + 0x4]
004E7C00  74 0D                     JZ 0x004e7c0f
LAB_004e7c02:
004E7C02  8B 50 05                  MOV EDX,dword ptr [EAX + 0x5]
004E7C05  83 C0 05                  ADD EAX,0x5
004E7C08  46                        INC ESI
004E7C09  85 D2                     TEST EDX,EDX
004E7C0B  75 E2                     JNZ 0x004e7bef
004E7C0D  EB 24                     JMP 0x004e7c33
LAB_004e7c0f:
004E7C0F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004E7C12  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E7C15  8B D1                     MOV EDX,ECX
004E7C17  8B 34 07                  MOV ESI,dword ptr [EDI + EAX*0x1]
004E7C1A  89 32                     MOV dword ptr [EDX],ESI
004E7C1C  8A 44 07 04               MOV AL,byte ptr [EDI + EAX*0x1 + 0x4]
004E7C20  88 42 04                  MOV byte ptr [EDX + 0x4],AL
004E7C23  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004E7C26  42                        INC EDX
004E7C27  83 C1 05                  ADD ECX,0x5
004E7C2A  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004E7C2D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E7C30  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_004e7c33:
004E7C33  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004E7C36  83 C6 19                  ADD ESI,0x19
004E7C39  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
004E7C3C  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004E7C3F  83 C6 19                  ADD ESI,0x19
004E7C42  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
004E7C45  83 3C 37 00               CMP dword ptr [EDI + ESI*0x1],0x0
004E7C49  0F 85 FC FE FF FF         JNZ 0x004e7b4b
004E7C4F  EB 03                     JMP 0x004e7c54
LAB_004e7c51:
004E7C51  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_004e7c54:
004E7C54  8B 51 05                  MOV EDX,dword ptr [ECX + 0x5]
004E7C57  83 C1 05                  ADD ECX,0x5
004E7C5A  85 D2                     TEST EDX,EDX
004E7C5C  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
004E7C5F  8B C1                     MOV EAX,ECX
004E7C61  0F 85 91 FD FF FF         JNZ 0x004e79f8
004E7C67  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004E7C6A  85 C0                     TEST EAX,EAX
004E7C6C  74 16                     JZ 0x004e7c84
004E7C6E  B9 C3 00 00 00            MOV ECX,0xc3
004E7C73  BE D0 0B 80 00            MOV ESI,0x800bd0
004E7C78  BF 20 10 80 00            MOV EDI,0x801020
004E7C7D  F3 A5                     MOVSD.REP ES:EDI,ESI
004E7C7F  E9 4A FD FF FF            JMP 0x004e79ce
LAB_004e7c84:
004E7C84  5F                        POP EDI
004E7C85  5E                        POP ESI
004E7C86  33 C0                     XOR EAX,EAX
004E7C88  5B                        POP EBX
004E7C89  8B E5                     MOV ESP,EBP
004E7C8B  5D                        POP EBP
004E7C8C  C2 0C 00                  RET 0xc
LAB_004e7c8f:
004E7C8F  33 C0                     XOR EAX,EAX
004E7C91  5B                        POP EBX
004E7C92  8B E5                     MOV ESP,EBP
004E7C94  5D                        POP EBP
004E7C95  C2 0C 00                  RET 0xc
