FUN_00726a80:
00726A80  55                        PUSH EBP
00726A81  8B EC                     MOV EBP,ESP
00726A83  83 EC 54                  SUB ESP,0x54
00726A86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00726A8B  56                        PUSH ESI
00726A8C  57                        PUSH EDI
00726A8D  8D 55 B0                  LEA EDX,[EBP + -0x50]
00726A90  8D 4D AC                  LEA ECX,[EBP + -0x54]
00726A93  6A 00                     PUSH 0x0
00726A95  52                        PUSH EDX
00726A96  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00726A9D  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00726AA0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00726AA6  E8 45 6D 00 00            CALL 0x0072d7f0
00726AAB  8B F0                     MOV ESI,EAX
00726AAD  83 C4 08                  ADD ESP,0x8
00726AB0  85 F6                     TEST ESI,ESI
00726AB2  0F 85 B9 00 00 00         JNZ 0x00726b71
00726AB8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00726ABB  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00726ABE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00726AC1  8D 4D F0                  LEA ECX,[EBP + -0x10]
00726AC4  50                        PUSH EAX
00726AC5  51                        PUSH ECX
00726AC6  57                        PUSH EDI
00726AC7  6A 06                     PUSH 0x6
00726AC9  8B CE                     MOV ECX,ESI
00726ACB  E8 40 B8 FC FF            CALL 0x006f2310
00726AD0  85 C0                     TEST EAX,EAX
00726AD2  75 18                     JNZ 0x00726aec
00726AD4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00726ADA  68 C2 01 00 00            PUSH 0x1c2
00726ADF  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726AE4  52                        PUSH EDX
00726AE5  6A FC                     PUSH -0x4
00726AE7  E8 54 F3 F7 FF            CALL 0x006a5e40
LAB_00726aec:
00726AEC  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
00726AF0  8D 04 85 0E 00 00 00      LEA EAX,[EAX*0x4 + 0xe]
00726AF7  50                        PUSH EAX
00726AF8  E8 13 41 F8 FF            CALL 0x006aac10
00726AFD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00726B00  89 70 02                  MOV dword ptr [EAX + 0x2],ESI
00726B03  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00726B06  66 8B 55 FA               MOV DX,word ptr [EBP + -0x6]
00726B0A  6A 01                     PUSH 0x1
00726B0C  66 89 11                  MOV word ptr [ECX],DX
00726B0F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00726B12  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
00726B16  66 89 48 06               MOV word ptr [EAX + 0x6],CX
00726B1A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00726B1D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00726B20  66 8B 45 F2               MOV AX,word ptr [EBP + -0xe]
00726B24  51                        PUSH ECX
00726B25  57                        PUSH EDI
00726B26  56                        PUSH ESI
00726B27  66 89 42 08               MOV word ptr [EDX + 0x8],AX
00726B2B  E8 20 3F FE FF            CALL 0x0070aa50
00726B30  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00726B33  B9 01 00 00 00            MOV ECX,0x1
00726B38  83 C4 10                  ADD ESP,0x10
00726B3B  89 42 0A                  MOV dword ptr [EDX + 0xa],EAX
00726B3E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00726B41  66 39 08                  CMP word ptr [EAX],CX
00726B44  8B 50 0A                  MOV EDX,dword ptr [EAX + 0xa]
00726B47  7E 19                     JLE 0x00726b62
LAB_00726b49:
00726B49  8B 3A                     MOV EDI,dword ptr [EDX]
00726B4B  8B F2                     MOV ESI,EDX
00726B4D  03 F7                     ADD ESI,EDI
00726B4F  89 74 88 0A               MOV dword ptr [EAX + ECX*0x4 + 0xa],ESI
00726B53  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00726B56  0F BF 30                  MOVSX ESI,word ptr [EAX]
00726B59  8B 54 88 0A               MOV EDX,dword ptr [EAX + ECX*0x4 + 0xa]
00726B5D  41                        INC ECX
00726B5E  3B CE                     CMP ECX,ESI
00726B60  7C E7                     JL 0x00726b49
LAB_00726b62:
00726B62  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00726B65  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00726B6B  5F                        POP EDI
00726B6C  5E                        POP ESI
00726B6D  8B E5                     MOV ESP,EBP
00726B6F  5D                        POP EBP
00726B70  C3                        RET
LAB_00726b71:
00726B71  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00726B74  8D 45 FC                  LEA EAX,[EBP + -0x4]
00726B77  50                        PUSH EAX
00726B78  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00726B7E  E8 4D 00 00 00            CALL 0x00726bd0
00726B83  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00726B86  83 C4 04                  ADD ESP,0x4
00726B89  85 C0                     TEST EAX,EAX
00726B8B  75 05                     JNZ 0x00726b92
00726B8D  83 FE FC                  CMP ESI,-0x4
00726B90  74 36                     JZ 0x00726bc8
LAB_00726b92:
00726B92  68 2C 0D 7F 00            PUSH 0x7f0d2c
00726B97  68 CC 4C 7A 00            PUSH 0x7a4ccc
00726B9C  56                        PUSH ESI
00726B9D  6A 00                     PUSH 0x0
00726B9F  68 D8 01 00 00            PUSH 0x1d8
00726BA4  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726BA9  E8 22 69 F8 FF            CALL 0x006ad4d0
00726BAE  83 C4 18                  ADD ESP,0x18
00726BB1  85 C0                     TEST EAX,EAX
00726BB3  74 01                     JZ 0x00726bb6
00726BB5  CC                        INT3
LAB_00726bb6:
00726BB6  68 DA 01 00 00            PUSH 0x1da
00726BBB  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726BC0  6A 00                     PUSH 0x0
00726BC2  56                        PUSH ESI
00726BC3  E8 78 F2 F7 FF            CALL 0x006a5e40
LAB_00726bc8:
00726BC8  5F                        POP EDI
00726BC9  33 C0                     XOR EAX,EAX
00726BCB  5E                        POP ESI
00726BCC  8B E5                     MOV ESP,EBP
00726BCE  5D                        POP EBP
00726BCF  C3                        RET
