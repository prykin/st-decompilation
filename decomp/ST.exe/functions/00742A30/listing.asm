FUN_00742a30:
00742A30  55                        PUSH EBP
00742A31  8B EC                     MOV EBP,ESP
00742A33  6A FF                     PUSH -0x1
00742A35  68 98 0F 7A 00            PUSH 0x7a0f98
00742A3A  68 64 D9 72 00            PUSH 0x72d964
00742A3F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00742A45  50                        PUSH EAX
00742A46  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00742A4D  83 C4 DC                  ADD ESP,-0x24
00742A50  53                        PUSH EBX
00742A51  56                        PUSH ESI
00742A52  57                        PUSH EDI
00742A53  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00742A56  83 3D 2C 74 85 00 00      CMP dword ptr [0x0085742c],0x0
00742A5D  75 4F                     JNZ 0x00742aae
00742A5F  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00742A62  50                        PUSH EAX
00742A63  6A 01                     PUSH 0x1
00742A65  68 5C 0A 7A 00            PUSH 0x7a0a5c
00742A6A  6A 01                     PUSH 0x1
00742A6C  FF 15 24 BC 85 00         CALL dword ptr [0x0085bc24]
00742A72  85 C0                     TEST EAX,EAX
00742A74  74 0C                     JZ 0x00742a82
00742A76  C7 05 2C 74 85 00 01 00 00 00  MOV dword ptr [0x0085742c],0x1
00742A80  EB 2C                     JMP 0x00742aae
LAB_00742a82:
00742A82  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00742A85  51                        PUSH ECX
00742A86  6A 01                     PUSH 0x1
00742A88  68 58 0A 7A 00            PUSH 0x7a0a58
00742A8D  6A 01                     PUSH 0x1
00742A8F  6A 00                     PUSH 0x0
00742A91  FF 15 C4 BC 85 00         CALL dword ptr [0x0085bcc4]
00742A97  85 C0                     TEST EAX,EAX
00742A99  74 0C                     JZ 0x00742aa7
00742A9B  C7 05 2C 74 85 00 02 00 00 00  MOV dword ptr [0x0085742c],0x2
00742AA5  EB 07                     JMP 0x00742aae
LAB_00742aa7:
00742AA7  33 C0                     XOR EAX,EAX
00742AA9  E9 DB 01 00 00            JMP 0x00742c89
LAB_00742aae:
00742AAE  83 3D 2C 74 85 00 01      CMP dword ptr [0x0085742c],0x1
00742AB5  75 1B                     JNZ 0x00742ad2
00742AB7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00742ABA  52                        PUSH EDX
00742ABB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742ABE  50                        PUSH EAX
00742ABF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00742AC2  51                        PUSH ECX
00742AC3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00742AC6  52                        PUSH EDX
00742AC7  FF 15 24 BC 85 00         CALL dword ptr [0x0085bc24]
00742ACD  E9 B7 01 00 00            JMP 0x00742c89
LAB_00742ad2:
00742AD2  83 3D 2C 74 85 00 02      CMP dword ptr [0x0085742c],0x2
00742AD9  0F 85 A8 01 00 00         JNZ 0x00742c87
00742ADF  83 7D 18 00               CMP dword ptr [EBP + 0x18],0x0
00742AE3  75 08                     JNZ 0x00742aed
00742AE5  A1 20 72 85 00            MOV EAX,[0x00857220]
00742AEA  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_00742aed:
00742AED  6A 00                     PUSH 0x0
00742AEF  6A 00                     PUSH 0x0
00742AF1  6A 00                     PUSH 0x0
00742AF3  6A 00                     PUSH 0x0
00742AF5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00742AF8  51                        PUSH ECX
00742AF9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00742AFC  52                        PUSH EDX
00742AFD  68 20 02 00 00            PUSH 0x220
00742B02  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00742B05  50                        PUSH EAX
00742B06  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
00742B0C  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00742B0F  83 7D D8 00               CMP dword ptr [EBP + -0x28],0x0
00742B13  75 07                     JNZ 0x00742b1c
00742B15  33 C0                     XOR EAX,EAX
00742B17  E9 6D 01 00 00            JMP 0x00742c89
LAB_00742b1c:
00742B1C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00742B23  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00742B26  83 C0 03                  ADD EAX,0x3
00742B29  24 FC                     AND AL,0xfc
00742B2B  E8 10 AF FE FF            CALL 0x0072da40
00742B30  89 65 D0                  MOV dword ptr [EBP + -0x30],ESP
00742B33  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00742B36  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00742B39  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00742B3C  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00742B3F  52                        PUSH EDX
00742B40  6A 00                     PUSH 0x0
00742B42  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00742B45  50                        PUSH EAX
00742B46  E8 C5 88 FF FF            CALL 0x0073b410
00742B4B  83 C4 0C                  ADD ESP,0xc
00742B4E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00742B55  EB 17                     JMP 0x00742b6e
LAB_00742b6e:
00742B6E  83 7D D4 00               CMP dword ptr [EBP + -0x2c],0x0
00742B72  75 07                     JNZ 0x00742b7b
00742B74  33 C0                     XOR EAX,EAX
00742B76  E9 0E 01 00 00            JMP 0x00742c89
LAB_00742b7b:
00742B7B  6A 00                     PUSH 0x0
00742B7D  6A 00                     PUSH 0x0
00742B7F  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00742B82  51                        PUSH ECX
00742B83  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00742B86  52                        PUSH EDX
00742B87  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742B8A  50                        PUSH EAX
00742B8B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00742B8E  51                        PUSH ECX
00742B8F  68 20 02 00 00            PUSH 0x220
00742B94  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00742B97  52                        PUSH EDX
00742B98  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
00742B9E  85 C0                     TEST EAX,EAX
00742BA0  75 07                     JNZ 0x00742ba9
00742BA2  33 C0                     XOR EAX,EAX
00742BA4  E9 E0 00 00 00            JMP 0x00742c89
LAB_00742ba9:
00742BA9  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00742BB0  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00742BB3  8D 44 00 02               LEA EAX,[EAX + EAX*0x1 + 0x2]
00742BB7  83 C0 03                  ADD EAX,0x3
00742BBA  24 FC                     AND AL,0xfc
00742BBC  E8 7F AE FE FF            CALL 0x0072da40
00742BC1  89 65 CC                  MOV dword ptr [EBP + -0x34],ESP
00742BC4  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00742BC7  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00742BCA  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00742BCD  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00742BD4  EB 17                     JMP 0x00742bed
LAB_00742bed:
00742BED  83 7D DC 00               CMP dword ptr [EBP + -0x24],0x0
00742BF1  75 07                     JNZ 0x00742bfa
00742BF3  33 C0                     XOR EAX,EAX
00742BF5  E9 8F 00 00 00            JMP 0x00742c89
LAB_00742bfa:
00742BFA  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
00742BFE  75 09                     JNZ 0x00742c09
00742C00  8B 15 10 72 85 00         MOV EDX,dword ptr [0x00857210]
00742C06  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_00742c09:
00742C09  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742C0C  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00742C0F  66 C7 04 41 FF FF         MOV word ptr [ECX + EAX*0x2],0xffff
00742C15  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00742C18  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00742C1B  66 C7 44 50 FE FF FF      MOV word ptr [EAX + EDX*0x2 + -0x2],0xffff
00742C22  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00742C25  51                        PUSH ECX
00742C26  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00742C29  52                        PUSH EDX
00742C2A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00742C2D  50                        PUSH EAX
00742C2E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00742C31  51                        PUSH ECX
00742C32  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00742C35  52                        PUSH EDX
00742C36  FF 15 C4 BC 85 00         CALL dword ptr [0x0085bcc4]
00742C3C  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00742C3F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742C42  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00742C45  33 D2                     XOR EDX,EDX
00742C47  66 8B 54 41 FE            MOV DX,word ptr [ECX + EAX*0x2 + -0x2]
00742C4C  81 FA FF FF 00 00         CMP EDX,0xffff
00742C52  74 14                     JZ 0x00742c68
00742C54  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742C57  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00742C5A  33 D2                     XOR EDX,EDX
00742C5C  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
00742C60  81 FA FF FF 00 00         CMP EDX,0xffff
00742C66  74 04                     JZ 0x00742c6c
LAB_00742c68:
00742C68  33 C0                     XOR EAX,EAX
00742C6A  EB 1D                     JMP 0x00742c89
LAB_00742c6c:
00742C6C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742C6F  D1 E0                     SHL EAX,0x1
00742C71  50                        PUSH EAX
00742C72  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00742C75  51                        PUSH ECX
00742C76  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00742C79  52                        PUSH EDX
00742C7A  E8 F1 AD FE FF            CALL 0x0072da70
00742C7F  83 C4 0C                  ADD ESP,0xc
00742C82  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00742C85  EB 02                     JMP 0x00742c89
LAB_00742c87:
00742C87  33 C0                     XOR EAX,EAX
LAB_00742c89:
00742C89  8D 65 C0                  LEA ESP,[EBP + -0x40]
00742C8C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00742C8F  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00742C96  5F                        POP EDI
00742C97  5E                        POP ESI
00742C98  5B                        POP EBX
00742C99  8B E5                     MOV ESP,EBP
00742C9B  5D                        POP EBP
00742C9C  C3                        RET
