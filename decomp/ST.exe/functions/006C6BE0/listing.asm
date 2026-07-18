FUN_006c6be0:
006C6BE0  55                        PUSH EBP
006C6BE1  8B EC                     MOV EBP,ESP
006C6BE3  56                        PUSH ESI
006C6BE4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C6BE7  8D 45 0B                  LEA EAX,[EBP + 0xb]
006C6BEA  6A 01                     PUSH 0x1
006C6BEC  50                        PUSH EAX
006C6BED  56                        PUSH ESI
006C6BEE  C6 46 5E 00               MOV byte ptr [ESI + 0x5e],0x0
006C6BF2  66 C7 46 5F 00 00         MOV word ptr [ESI + 0x5f],0x0
006C6BF8  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6BFB  83 F8 01                  CMP EAX,0x1
006C6BFE  75 2A                     JNZ 0x006c6c2a
LAB_006c6c00:
006C6C00  8A 45 0B                  MOV AL,byte ptr [EBP + 0xb]
006C6C03  3C 21                     CMP AL,0x21
006C6C05  74 0A                     JZ 0x006c6c11
006C6C07  3C 2C                     CMP AL,0x2c
006C6C09  74 6C                     JZ 0x006c6c77
006C6C0B  3C 3B                     CMP AL,0x3b
006C6C0D  74 33                     JZ 0x006c6c42
006C6C0F  EB 0A                     JMP 0x006c6c1b
LAB_006c6c11:
006C6C11  56                        PUSH ESI
006C6C12  E8 69 00 00 00            CALL 0x006c6c80
006C6C17  85 C0                     TEST EAX,EAX
006C6C19  75 5E                     JNZ 0x006c6c79
LAB_006c6c1b:
006C6C1B  8D 4D 0B                  LEA ECX,[EBP + 0xb]
006C6C1E  6A 01                     PUSH 0x1
006C6C20  51                        PUSH ECX
006C6C21  56                        PUSH ESI
006C6C22  FF 56 42                  CALL dword ptr [ESI + 0x42]
006C6C25  83 F8 01                  CMP EAX,0x1
006C6C28  74 D6                     JZ 0x006c6c00
LAB_006c6c2a:
006C6C2A  85 C0                     TEST EAX,EAX
006C6C2C  75 08                     JNZ 0x006c6c36
006C6C2E  83 C8 FF                  OR EAX,0xffffffff
006C6C31  5E                        POP ESI
006C6C32  5D                        POP EBP
006C6C33  C2 04 00                  RET 0x4
LAB_006c6c36:
006C6C36  7C 41                     JL 0x006c6c79
006C6C38  B8 FB FF FF FF            MOV EAX,0xfffffffb
006C6C3D  5E                        POP ESI
006C6C3E  5D                        POP EBP
006C6C3F  C2 04 00                  RET 0x4
LAB_006c6c42:
006C6C42  8B 46 56                  MOV EAX,dword ptr [ESI + 0x56]
006C6C45  A8 02                     TEST AL,0x2
006C6C47  74 26                     JZ 0x006c6c6f
006C6C49  8B 4E 5A                  MOV ECX,dword ptr [ESI + 0x5a]
006C6C4C  0C 01                     OR AL,0x1
006C6C4E  49                        DEC ECX
006C6C4F  89 46 56                  MOV dword ptr [ESI + 0x56],EAX
006C6C52  89 4E 5A                  MOV dword ptr [ESI + 0x5a],ECX
006C6C55  75 0D                     JNZ 0x006c6c64
006C6C57  0C 08                     OR AL,0x8
006C6C59  89 46 56                  MOV dword ptr [ESI + 0x56],EAX
006C6C5C  83 C8 FF                  OR EAX,0xffffffff
006C6C5F  5E                        POP ESI
006C6C60  5D                        POP EBP
006C6C61  C2 04 00                  RET 0x4
LAB_006c6c64:
006C6C64  85 C9                     TEST ECX,ECX
006C6C66  7F 07                     JG 0x006c6c6f
006C6C68  C7 46 5A 00 00 00 00      MOV dword ptr [ESI + 0x5a],0x0
LAB_006c6c6f:
006C6C6F  83 C8 FF                  OR EAX,0xffffffff
006C6C72  5E                        POP ESI
006C6C73  5D                        POP EBP
006C6C74  C2 04 00                  RET 0x4
LAB_006c6c77:
006C6C77  33 C0                     XOR EAX,EAX
LAB_006c6c79:
006C6C79  5E                        POP ESI
006C6C7A  5D                        POP EBP
006C6C7B  C2 04 00                  RET 0x4
