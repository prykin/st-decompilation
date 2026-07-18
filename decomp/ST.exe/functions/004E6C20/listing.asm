FUN_004e6c20:
004E6C20  55                        PUSH EBP
004E6C21  8B EC                     MOV EBP,ESP
004E6C23  51                        PUSH ECX
004E6C24  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E6C27  56                        PUSH ESI
004E6C28  85 C0                     TEST EAX,EAX
004E6C2A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004E6C2D  0F 8C 90 00 00 00         JL 0x004e6cc3
004E6C33  83 F8 08                  CMP EAX,0x8
004E6C36  0F 8D 87 00 00 00         JGE 0x004e6cc3
004E6C3C  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004E6C3F  83 FE 32                  CMP ESI,0x32
004E6C42  7C 7F                     JL 0x004e6cc3
004E6C44  83 FE 74                  CMP ESI,0x74
004E6C47  7D 7A                     JGE 0x004e6cc3
004E6C49  53                        PUSH EBX
004E6C4A  57                        PUSH EDI
004E6C4B  50                        PUSH EAX
004E6C4C  BB 01 00 00 00            MOV EBX,0x1
004E6C51  E8 61 DD F1 FF            CALL 0x004049b7
004E6C56  25 FF 00 00 00            AND EAX,0xff
004E6C5B  33 FF                     XOR EDI,EDI
004E6C5D  48                        DEC EAX
004E6C5E  8B C8                     MOV ECX,EAX
004E6C60  C1 E1 05                  SHL ECX,0x5
004E6C63  03 C8                     ADD ECX,EAX
004E6C65  8D 44 4E CE               LEA EAX,[ESI + ECX*0x2 + -0x32]
004E6C69  8D B4 40 4C 0E 7C 00      LEA ESI,[EAX + EAX*0x2 + 0x7c0e4c]
004E6C70  8A 84 40 4C 0E 7C 00      MOV AL,byte ptr [EAX + EAX*0x2 + 0x7c0e4c]
004E6C77  84 C0                     TEST AL,AL
004E6C79  74 3D                     JZ 0x004e6cb8
LAB_004e6c7b:
004E6C7B  83 FF 03                  CMP EDI,0x3
004E6C7E  7D 38                     JGE 0x004e6cb8
004E6C80  85 FF                     TEST EDI,EDI
004E6C82  75 13                     JNZ 0x004e6c97
004E6C84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E6C87  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6C8A  33 D2                     XOR EDX,EDX
004E6C8C  8A 16                     MOV DL,byte ptr [ESI]
004E6C8E  52                        PUSH EDX
004E6C8F  50                        PUSH EAX
004E6C90  E8 88 EA F1 FF            CALL 0x0040571d
004E6C95  EB 12                     JMP 0x004e6ca9
LAB_004e6c97:
004E6C97  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E6C9A  33 C9                     XOR ECX,ECX
004E6C9C  8A 0C 3E                  MOV CL,byte ptr [ESI + EDI*0x1]
004E6C9F  51                        PUSH ECX
004E6CA0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6CA3  52                        PUSH EDX
004E6CA4  E8 C2 AB F1 FF            CALL 0x0040186b
LAB_004e6ca9:
004E6CA9  8B D8                     MOV EBX,EAX
004E6CAB  85 DB                     TEST EBX,EBX
004E6CAD  74 09                     JZ 0x004e6cb8
004E6CAF  8A 44 3E 01               MOV AL,byte ptr [ESI + EDI*0x1 + 0x1]
004E6CB3  47                        INC EDI
004E6CB4  84 C0                     TEST AL,AL
004E6CB6  75 C3                     JNZ 0x004e6c7b
LAB_004e6cb8:
004E6CB8  8B C3                     MOV EAX,EBX
004E6CBA  5F                        POP EDI
004E6CBB  5B                        POP EBX
004E6CBC  5E                        POP ESI
004E6CBD  8B E5                     MOV ESP,EBP
004E6CBF  5D                        POP EBP
004E6CC0  C2 08 00                  RET 0x8
LAB_004e6cc3:
004E6CC3  33 C0                     XOR EAX,EAX
004E6CC5  5E                        POP ESI
004E6CC6  8B E5                     MOV ESP,EBP
004E6CC8  5D                        POP EBP
004E6CC9  C2 08 00                  RET 0x8
