FUN_004d7270:
004D7270  56                        PUSH ESI
004D7271  8B F1                     MOV ESI,ECX
004D7273  57                        PUSH EDI
004D7274  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004D727A  85 C0                     TEST EAX,EAX
004D727C  0F 85 C3 00 00 00         JNZ 0x004d7345
004D7282  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004D7285  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D728B  50                        PUSH EAX
004D728C  E8 9F E0 F2 FF            CALL 0x00405330
004D7291  85 C0                     TEST EAX,EAX
004D7293  0F 84 AC 00 00 00         JZ 0x004d7345
004D7299  8B 16                     MOV EDX,dword ptr [ESI]
004D729B  8B CE                     MOV ECX,ESI
004D729D  FF 92 C4 00 00 00         CALL dword ptr [EDX + 0xc4]
004D72A3  8B CE                     MOV ECX,ESI
004D72A5  8B F8                     MOV EDI,EAX
004D72A7  E8 6E B0 F2 FF            CALL 0x0040231a
004D72AC  8B 06                     MOV EAX,dword ptr [ESI]
004D72AE  8B CE                     MOV ECX,ESI
004D72B0  FF 90 C4 00 00 00         CALL dword ptr [EAX + 0xc4]
004D72B6  3B C7                     CMP EAX,EDI
004D72B8  7E 22                     JLE 0x004d72dc
004D72BA  8B 7E 2C                  MOV EDI,dword ptr [ESI + 0x2c]
004D72BD  33 C9                     XOR ECX,ECX
004D72BF  83 FF 01                  CMP EDI,0x1
004D72C2  6A 00                     PUSH 0x0
004D72C4  0F 94 C1                  SETZ CL
004D72C7  51                        PUSH ECX
004D72C8  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D72CE  E8 F9 DF F2 FF            CALL 0x004052cc
004D72D3  50                        PUSH EAX
004D72D4  E8 12 9E F2 FF            CALL 0x004010eb
004D72D9  83 C4 0C                  ADD ESP,0xc
LAB_004d72dc:
004D72DC  8A 96 3D 02 00 00         MOV DL,byte ptr [ESI + 0x23d]
004D72E2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D72E8  52                        PUSH EDX
004D72E9  E8 C9 D6 F2 FF            CALL 0x004049b7
004D72EE  8A C8                     MOV CL,AL
004D72F0  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004D72F6  81 E1 FF 00 00 00         AND ECX,0xff
004D72FC  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004D72FF  03 CA                     ADD ECX,EDX
004D7301  8B 04 8D 30 62 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x796230]
004D7308  85 C0                     TEST EAX,EAX
004D730A  74 39                     JZ 0x004d7345
004D730C  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004D7312  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D7318  8B 3E                     MOV EDI,dword ptr [ESI]
004D731A  50                        PUSH EAX
004D731B  E8 97 D6 F2 FF            CALL 0x004049b7
004D7320  8A C8                     MOV CL,AL
004D7322  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004D7328  81 E1 FF 00 00 00         AND ECX,0xff
004D732E  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004D7331  03 CA                     ADD ECX,EDX
004D7333  8B 04 8D 30 62 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x796230]
004D733A  8B CE                     MOV ECX,ESI
004D733C  50                        PUSH EAX
004D733D  6A 03                     PUSH 0x3
004D733F  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
LAB_004d7345:
004D7345  5F                        POP EDI
004D7346  33 C0                     XOR EAX,EAX
004D7348  5E                        POP ESI
004D7349  C3                        RET
