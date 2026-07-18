FUN_00476a10:
00476A10  55                        PUSH EBP
00476A11  8B EC                     MOV EBP,ESP
00476A13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00476A16  56                        PUSH ESI
00476A17  85 C0                     TEST EAX,EAX
00476A19  8B F1                     MOV ESI,ECX
00476A1B  0F 84 6D 01 00 00         JZ 0x00476b8e
00476A21  83 F8 01                  CMP EAX,0x1
00476A24  0F 84 64 01 00 00         JZ 0x00476b8e
00476A2A  8B 86 F8 05 00 00         MOV EAX,dword ptr [ESI + 0x5f8]
00476A30  85 C0                     TEST EAX,EAX
00476A32  0F 85 85 00 00 00         JNZ 0x00476abd
00476A38  6A 02                     PUSH 0x2
00476A3A  E8 F5 D0 F8 FF            CALL 0x00403b34
00476A3F  83 F8 FF                  CMP EAX,-0x1
00476A42  74 4A                     JZ 0x00476a8e
00476A44  85 C0                     TEST EAX,EAX
00476A46  74 32                     JZ 0x00476a7a
00476A48  83 F8 03                  CMP EAX,0x3
00476A4B  75 37                     JNZ 0x00476a84
00476A4D  8B CE                     MOV ECX,ESI
00476A4F  E8 9D AF F8 FF            CALL 0x004019f1
00476A54  83 F8 01                  CMP EAX,0x1
00476A57  0F 85 C8 01 00 00         JNZ 0x00476c25
00476A5D  0F BF 86 F6 05 00 00      MOVSX EAX,word ptr [ESI + 0x5f6]
00476A64  0F BF 8E F4 05 00 00      MOVSX ECX,word ptr [ESI + 0x5f4]
00476A6B  0F BF 96 F2 05 00 00      MOVSX EDX,word ptr [ESI + 0x5f2]
00476A72  50                        PUSH EAX
00476A73  51                        PUSH ECX
00476A74  52                        PUSH EDX
00476A75  E9 8D 01 00 00            JMP 0x00476c07
LAB_00476a7a:
00476A7A  C7 86 F8 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x5f8],0x1
LAB_00476a84:
00476A84  B8 02 00 00 00            MOV EAX,0x2
00476A89  5E                        POP ESI
00476A8A  5D                        POP EBP
00476A8B  C2 04 00                  RET 0x4
LAB_00476a8e:
00476A8E  68 0C B1 7A 00            PUSH 0x7ab10c
00476A93  68 CC 4C 7A 00            PUSH 0x7a4ccc
00476A98  6A 00                     PUSH 0x0
00476A9A  6A 00                     PUSH 0x0
00476A9C  68 84 31 00 00            PUSH 0x3184
00476AA1  68 3C 9D 7A 00            PUSH 0x7a9d3c
00476AA6  E8 25 6A 23 00            CALL 0x006ad4d0
00476AAB  83 C4 18                  ADD ESP,0x18
00476AAE  85 C0                     TEST EAX,EAX
00476AB0  74 01                     JZ 0x00476ab3
00476AB2  CC                        INT3
LAB_00476ab3:
00476AB3  B8 FF FF 00 00            MOV EAX,0xffff
00476AB8  5E                        POP ESI
00476AB9  5D                        POP EBP
00476ABA  C2 04 00                  RET 0x4
LAB_00476abd:
00476ABD  83 F8 01                  CMP EAX,0x1
00476AC0  0F 85 B5 00 00 00         JNZ 0x00476b7b
00476AC6  8B 86 BE 07 00 00         MOV EAX,dword ptr [ESI + 0x7be]
00476ACC  68 2C 01 00 00            PUSH 0x12c
00476AD1  83 F8 0F                  CMP EAX,0xf
00476AD4  7C 5F                     JL 0x00476b35
00476AD6  66 8B 8E EE 05 00 00      MOV CX,word ptr [ESI + 0x5ee]
00476ADD  33 C0                     XOR EAX,EAX
00476ADF  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00476AE3  6A 0F                     PUSH 0xf
00476AE5  50                        PUSH EAX
00476AE6  66 8B 86 EC 05 00 00      MOV AX,word ptr [ESI + 0x5ec]
00476AED  66 69 C9 C9 00            IMUL CX,CX,0xc9
00476AF2  66 69 C0 C9 00            IMUL AX,AX,0xc9
00476AF7  83 C1 64                  ADD ECX,0x64
00476AFA  83 C0 64                  ADD EAX,0x64
00476AFD  0F BF D1                  MOVSX EDX,CX
00476B00  0F BF C8                  MOVSX ECX,AX
00476B03  6A 64                     PUSH 0x64
00476B05  52                        PUSH EDX
00476B06  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00476B09  51                        PUSH ECX
00476B0A  52                        PUSH EDX
00476B0B  E8 60 EE F8 FF            CALL 0x00405970
00476B10  8B 86 BE 07 00 00         MOV EAX,dword ptr [ESI + 0x7be]
00476B16  83 C4 1C                  ADD ESP,0x1c
00476B19  83 C0 F1                  ADD EAX,-0xf
00476B1C  8B CE                     MOV ECX,ESI
00476B1E  89 86 BE 07 00 00         MOV dword ptr [ESI + 0x7be],EAX
00476B24  8B 06                     MOV EAX,dword ptr [ESI]
00476B26  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00476B2C  F7 D8                     NEG EAX
00476B2E  1B C0                     SBB EAX,EAX
00476B30  5E                        POP ESI
00476B31  5D                        POP EBP
00476B32  C2 04 00                  RET 0x4
LAB_00476b35:
00476B35  66 8B 8E EE 05 00 00      MOV CX,word ptr [ESI + 0x5ee]
00476B3C  50                        PUSH EAX
00476B3D  33 C0                     XOR EAX,EAX
00476B3F  66 69 C9 C9 00            IMUL CX,CX,0xc9
00476B44  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
00476B48  83 C1 64                  ADD ECX,0x64
00476B4B  50                        PUSH EAX
00476B4C  66 8B 86 EC 05 00 00      MOV AX,word ptr [ESI + 0x5ec]
00476B53  66 69 C0 C9 00            IMUL AX,AX,0xc9
00476B58  0F BF D1                  MOVSX EDX,CX
00476B5B  83 C0 64                  ADD EAX,0x64
00476B5E  6A 64                     PUSH 0x64
00476B60  0F BF C8                  MOVSX ECX,AX
00476B63  52                        PUSH EDX
00476B64  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00476B67  51                        PUSH ECX
00476B68  52                        PUSH EDX
00476B69  E8 02 EE F8 FF            CALL 0x00405970
00476B6E  83 C4 1C                  ADD ESP,0x1c
00476B71  C7 86 BE 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7be],0x0
LAB_00476b7b:
00476B7B  8B 06                     MOV EAX,dword ptr [ESI]
00476B7D  8B CE                     MOV ECX,ESI
00476B7F  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00476B85  F7 D8                     NEG EAX
00476B87  1B C0                     SBB EAX,EAX
00476B89  5E                        POP ESI
00476B8A  5D                        POP EBP
00476B8B  C2 04 00                  RET 0x4
LAB_00476b8e:
00476B8E  57                        PUSH EDI
00476B8F  B9 17 00 00 00            MOV ECX,0x17
00476B94  33 C0                     XOR EAX,EAX
00476B96  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
00476B9C  F3 AB                     STOSD.REP ES:EDI
00476B9E  89 86 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EAX
00476BA4  8B 86 BE 07 00 00         MOV EAX,dword ptr [ESI + 0x7be]
00476BAA  85 C0                     TEST EAX,EAX
00476BAC  5F                        POP EDI
00476BAD  7E 76                     JLE 0x00476c25
00476BAF  66 8B 8E E2 03 00 00      MOV CX,word ptr [ESI + 0x3e2]
00476BB6  66 8B 96 E4 03 00 00      MOV DX,word ptr [ESI + 0x3e4]
00476BBD  66 8B 86 E6 03 00 00      MOV AX,word ptr [ESI + 0x3e6]
00476BC4  66 89 8E EC 05 00 00      MOV word ptr [ESI + 0x5ec],CX
00476BCB  8B CE                     MOV ECX,ESI
00476BCD  66 89 96 EE 05 00 00      MOV word ptr [ESI + 0x5ee],DX
00476BD4  66 89 86 F0 05 00 00      MOV word ptr [ESI + 0x5f0],AX
00476BDB  E8 11 AE F8 FF            CALL 0x004019f1
00476BE0  83 F8 01                  CMP EAX,0x1
00476BE3  75 40                     JNZ 0x00476c25
00476BE5  0F BF 8E F6 05 00 00      MOVSX ECX,word ptr [ESI + 0x5f6]
00476BEC  0F BF 96 F4 05 00 00      MOVSX EDX,word ptr [ESI + 0x5f4]
00476BF3  0F BF 86 F2 05 00 00      MOVSX EAX,word ptr [ESI + 0x5f2]
00476BFA  51                        PUSH ECX
00476BFB  52                        PUSH EDX
00476BFC  C7 86 F8 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x5f8],0x0
00476C06  50                        PUSH EAX
LAB_00476c07:
00476C07  8B CE                     MOV ECX,ESI
00476C09  E8 5D E3 F8 FF            CALL 0x00404f6b
00476C0E  6A 00                     PUSH 0x0
00476C10  8B CE                     MOV ECX,ESI
00476C12  E8 1D CF F8 FF            CALL 0x00403b34
00476C17  40                        INC EAX
00476C18  5E                        POP ESI
00476C19  F7 D8                     NEG EAX
00476C1B  1B C0                     SBB EAX,EAX
00476C1D  83 E0 03                  AND EAX,0x3
00476C20  48                        DEC EAX
00476C21  5D                        POP EBP
00476C22  C2 04 00                  RET 0x4
LAB_00476c25:
00476C25  33 C0                     XOR EAX,EAX
00476C27  5E                        POP ESI
00476C28  5D                        POP EBP
00476C29  C2 04 00                  RET 0x4
