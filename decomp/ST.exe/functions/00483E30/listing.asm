FUN_00483e30:
00483E30  55                        PUSH EBP
00483E31  8B EC                     MOV EBP,ESP
00483E33  83 EC 10                  SUB ESP,0x10
00483E36  53                        PUSH EBX
00483E37  56                        PUSH ESI
00483E38  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00483E3B  57                        PUSH EDI
00483E3C  0F BF 59 41               MOVSX EBX,word ptr [ECX + 0x41]
00483E40  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
00483E44  8B C3                     MOV EAX,EBX
00483E46  2B C2                     SUB EAX,EDX
00483E48  99                        CDQ
00483E49  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00483E4C  8B 81 0C 08 00 00         MOV EAX,dword ptr [ECX + 0x80c]
00483E52  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00483E55  99                        CDQ
00483E56  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00483E59  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00483E5C  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00483E60  0F BF 41 43               MOVSX EAX,word ptr [ECX + 0x43]
00483E64  0F BF 7E 45               MOVSX EDI,word ptr [ESI + 0x45]
00483E68  2B C2                     SUB EAX,EDX
00483E6A  99                        CDQ
00483E6B  8B F0                     MOV ESI,EAX
00483E6D  8B C3                     MOV EAX,EBX
00483E6F  8B DE                     MOV EBX,ESI
00483E71  2B C7                     SUB EAX,EDI
00483E73  8B F2                     MOV ESI,EDX
00483E75  99                        CDQ
00483E76  03 D8                     ADD EBX,EAX
00483E78  0F BF 41 45               MOVSX EAX,word ptr [ECX + 0x45]
00483E7C  13 F2                     ADC ESI,EDX
00483E7E  2B C7                     SUB EAX,EDI
00483E80  99                        CDQ
00483E81  52                        PUSH EDX
00483E82  50                        PUSH EAX
00483E83  56                        PUSH ESI
00483E84  53                        PUSH EBX
00483E85  E8 66 A6 2A 00            CALL 0x0072e4f0
00483E8A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00483E8D  8B F8                     MOV EDI,EAX
00483E8F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00483E92  51                        PUSH ECX
00483E93  50                        PUSH EAX
00483E94  51                        PUSH ECX
00483E95  50                        PUSH EAX
00483E96  8B F2                     MOV ESI,EDX
00483E98  E8 53 A6 2A 00            CALL 0x0072e4f0
00483E9D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00483EA0  03 F8                     ADD EDI,EAX
00483EA2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00483EA5  51                        PUSH ECX
00483EA6  50                        PUSH EAX
00483EA7  51                        PUSH ECX
00483EA8  50                        PUSH EAX
00483EA9  13 F2                     ADC ESI,EDX
00483EAB  E8 40 A6 2A 00            CALL 0x0072e4f0
00483EB0  3B F2                     CMP ESI,EDX
00483EB2  7C 11                     JL 0x00483ec5
00483EB4  7F 04                     JG 0x00483eba
00483EB6  3B F8                     CMP EDI,EAX
00483EB8  76 0B                     JBE 0x00483ec5
LAB_00483eba:
00483EBA  5F                        POP EDI
00483EBB  5E                        POP ESI
00483EBC  33 C0                     XOR EAX,EAX
00483EBE  5B                        POP EBX
00483EBF  8B E5                     MOV ESP,EBP
00483EC1  5D                        POP EBP
00483EC2  C2 04 00                  RET 0x4
LAB_00483ec5:
00483EC5  5F                        POP EDI
00483EC6  5E                        POP ESI
00483EC7  B8 01 00 00 00            MOV EAX,0x1
00483ECC  5B                        POP EBX
00483ECD  8B E5                     MOV ESP,EBP
00483ECF  5D                        POP EBP
00483ED0  C2 04 00                  RET 0x4
