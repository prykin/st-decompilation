FUN_0063cb30:
0063CB30  8B 81 66 02 00 00         MOV EAX,dword ptr [ECX + 0x266]
0063CB36  53                        PUSH EBX
0063CB37  33 D2                     XOR EDX,EDX
0063CB39  33 DB                     XOR EBX,EBX
0063CB3B  56                        PUSH ESI
0063CB3C  3B C2                     CMP EAX,EDX
0063CB3E  57                        PUSH EDI
0063CB3F  7D 0F                     JGE 0x0063cb50
0063CB41  5F                        POP EDI
0063CB42  5E                        POP ESI
0063CB43  89 91 66 02 00 00         MOV dword ptr [ECX + 0x266],EDX
0063CB49  B8 02 00 00 00            MOV EAX,0x2
0063CB4E  5B                        POP EBX
0063CB4F  C3                        RET
LAB_0063cb50:
0063CB50  8B B9 6A 02 00 00         MOV EDI,dword ptr [ECX + 0x26a]
0063CB56  3B FA                     CMP EDI,EDX
0063CB58  7D 0F                     JGE 0x0063cb69
0063CB5A  5F                        POP EDI
0063CB5B  5E                        POP ESI
0063CB5C  89 91 6A 02 00 00         MOV dword ptr [ECX + 0x26a],EDX
0063CB62  B8 02 00 00 00            MOV EAX,0x2
0063CB67  5B                        POP EBX
0063CB68  C3                        RET
LAB_0063cb69:
0063CB69  8B B1 6E 02 00 00         MOV ESI,dword ptr [ECX + 0x26e]
0063CB6F  83 FE 5A                  CMP ESI,0x5a
0063CB72  7D 13                     JGE 0x0063cb87
0063CB74  5F                        POP EDI
0063CB75  5E                        POP ESI
0063CB76  C7 81 6E 02 00 00 5A 00 00 00  MOV dword ptr [ECX + 0x26e],0x5a
0063CB80  B8 02 00 00 00            MOV EAX,0x2
0063CB85  5B                        POP EBX
0063CB86  C3                        RET
LAB_0063cb87:
0063CB87  0F BF 91 53 02 00 00      MOVSX EDX,word ptr [ECX + 0x253]
0063CB8E  2B C2                     SUB EAX,EDX
0063CB90  99                        CDQ
0063CB91  33 C2                     XOR EAX,EDX
0063CB93  2B C2                     SUB EAX,EDX
0063CB95  83 F8 05                  CMP EAX,0x5
0063CB98  7F 39                     JG 0x0063cbd3
0063CB9A  0F BF 91 55 02 00 00      MOVSX EDX,word ptr [ECX + 0x255]
0063CBA1  8B C7                     MOV EAX,EDI
0063CBA3  2B C2                     SUB EAX,EDX
0063CBA5  99                        CDQ
0063CBA6  33 C2                     XOR EAX,EDX
0063CBA8  2B C2                     SUB EAX,EDX
0063CBAA  83 F8 05                  CMP EAX,0x5
0063CBAD  7F 24                     JG 0x0063cbd3
0063CBAF  8B 91 82 02 00 00         MOV EDX,dword ptr [ECX + 0x282]
0063CBB5  8B C6                     MOV EAX,ESI
0063CBB7  2B C2                     SUB EAX,EDX
0063CBB9  99                        CDQ
0063CBBA  33 C2                     XOR EAX,EDX
0063CBBC  2B C2                     SUB EAX,EDX
0063CBBE  83 F8 05                  CMP EAX,0x5
0063CBC1  7E 07                     JLE 0x0063cbca
0063CBC3  3D 96 00 00 00            CMP EAX,0x96
0063CBC8  7F 09                     JG 0x0063cbd3
LAB_0063cbca:
0063CBCA  5F                        POP EDI
0063CBCB  5E                        POP ESI
0063CBCC  B8 03 00 00 00            MOV EAX,0x3
0063CBD1  5B                        POP EBX
0063CBD2  C3                        RET
LAB_0063cbd3:
0063CBD3  5F                        POP EDI
0063CBD4  8B C3                     MOV EAX,EBX
0063CBD6  5E                        POP ESI
0063CBD7  5B                        POP EBX
0063CBD8  C3                        RET
