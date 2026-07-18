FUN_005f0ba0:
005F0BA0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F0BA5  53                        PUSH EBX
005F0BA6  56                        PUSH ESI
005F0BA7  8B F1                     MOV ESI,ECX
005F0BA9  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
005F0BAF  33 D2                     XOR EDX,EDX
005F0BB1  B9 05 00 00 00            MOV ECX,0x5
005F0BB6  33 DB                     XOR EBX,EBX
005F0BB8  F7 F1                     DIV ECX
005F0BBA  57                        PUSH EDI
005F0BBB  85 D2                     TEST EDX,EDX
005F0BBD  0F 85 DE 00 00 00         JNZ 0x005f0ca1
005F0BC3  8B 86 B5 02 00 00         MOV EAX,dword ptr [ESI + 0x2b5]
005F0BC9  8B 8E D2 02 00 00         MOV ECX,dword ptr [ESI + 0x2d2]
005F0BCF  83 F8 01                  CMP EAX,0x1
005F0BD2  A1 24 67 80 00            MOV EAX,[0x00806724]
005F0BD7  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005F0BDD  0F BF 50 2C               MOVSX EDX,word ptr [EAX + 0x2c]
005F0BE1  52                        PUSH EDX
005F0BE2  8B 54 88 30               MOV EDX,dword ptr [EAX + ECX*0x4 + 0x30]
005F0BE6  52                        PUSH EDX
005F0BE7  8B CF                     MOV ECX,EDI
005F0BE9  75 6E                     JNZ 0x005f0c59
005F0BEB  E8 7D 05 E1 FF            CALL 0x0040116d
005F0BF0  8B 86 D2 02 00 00         MOV EAX,dword ptr [ESI + 0x2d2]
005F0BF6  48                        DEC EAX
005F0BF7  89 86 D2 02 00 00         MOV dword ptr [ESI + 0x2d2],EAX
005F0BFD  8B C8                     MOV ECX,EAX
005F0BFF  A1 24 67 80 00            MOV EAX,[0x00806724]
005F0C04  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
005F0C08  99                        CDQ
005F0C09  2B C2                     SUB EAX,EDX
005F0C0B  D1 F8                     SAR EAX,0x1
005F0C0D  3B C8                     CMP ECX,EAX
005F0C0F  75 18                     JNZ 0x005f0c29
005F0C11  8B CF                     MOV ECX,EDI
005F0C13  E8 B5 4A E1 FF            CALL 0x004056cd
005F0C18  84 C0                     TEST AL,AL
005F0C1A  74 0D                     JZ 0x005f0c29
005F0C1C  8B CE                     MOV ECX,ESI
005F0C1E  E8 E0 3C E1 FF            CALL 0x00404903
005F0C23  8B 17                     MOV EDX,dword ptr [EDI]
005F0C25  8B CF                     MOV ECX,EDI
005F0C27  FF 12                     CALL dword ptr [EDX]
LAB_005f0c29:
005F0C29  8B 86 D2 02 00 00         MOV EAX,dword ptr [ESI + 0x2d2]
005F0C2F  85 C0                     TEST EAX,EAX
005F0C31  7D 6E                     JGE 0x005f0ca1
005F0C33  C7 86 D2 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2d2],0x0
005F0C3D  A1 24 67 80 00            MOV EAX,[0x00806724]
005F0C42  0F BF 48 2C               MOVSX ECX,word ptr [EAX + 0x2c]
005F0C46  51                        PUSH ECX
005F0C47  6A 00                     PUSH 0x0
005F0C49  8B CF                     MOV ECX,EDI
005F0C4B  E8 1D 05 E1 FF            CALL 0x0040116d
005F0C50  5F                        POP EDI
005F0C51  5E                        POP ESI
005F0C52  B8 01 00 00 00            MOV EAX,0x1
005F0C57  5B                        POP EBX
005F0C58  C3                        RET
LAB_005f0c59:
005F0C59  E8 0F 05 E1 FF            CALL 0x0040116d
005F0C5E  8B 86 D2 02 00 00         MOV EAX,dword ptr [ESI + 0x2d2]
005F0C64  40                        INC EAX
005F0C65  89 86 D2 02 00 00         MOV dword ptr [ESI + 0x2d2],EAX
005F0C6B  8B C8                     MOV ECX,EAX
005F0C6D  A1 24 67 80 00            MOV EAX,[0x00806724]
005F0C72  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
005F0C76  3B C8                     CMP ECX,EAX
005F0C78  7C 17                     JL 0x005f0c91
005F0C7A  49                        DEC ECX
005F0C7B  89 8E D2 02 00 00         MOV dword ptr [ESI + 0x2d2],ECX
005F0C81  8B CF                     MOV ECX,EDI
005F0C83  E8 87 30 E1 FF            CALL 0x00403d0f
005F0C88  5F                        POP EDI
005F0C89  5E                        POP ESI
005F0C8A  B8 01 00 00 00            MOV EAX,0x1
005F0C8F  5B                        POP EBX
005F0C90  C3                        RET
LAB_005f0c91:
005F0C91  99                        CDQ
005F0C92  2B C2                     SUB EAX,EDX
005F0C94  D1 F8                     SAR EAX,0x1
005F0C96  3B C8                     CMP ECX,EAX
005F0C98  75 07                     JNZ 0x005f0ca1
005F0C9A  8B CF                     MOV ECX,EDI
005F0C9C  E8 EF 1D E1 FF            CALL 0x00402a90
LAB_005f0ca1:
005F0CA1  5F                        POP EDI
005F0CA2  8B C3                     MOV EAX,EBX
005F0CA4  5E                        POP ESI
005F0CA5  5B                        POP EBX
005F0CA6  C3                        RET
