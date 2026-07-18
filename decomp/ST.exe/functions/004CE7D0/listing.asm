FUN_004ce7d0:
004CE7D0  56                        PUSH ESI
004CE7D1  8B F1                     MOV ESI,ECX
004CE7D3  57                        PUSH EDI
004CE7D4  BF 01 00 00 00            MOV EDI,0x1
004CE7D9  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004CE7DF  85 C0                     TEST EAX,EAX
004CE7E1  74 58                     JZ 0x004ce83b
004CE7E3  3B C7                     CMP EAX,EDI
004CE7E5  74 07                     JZ 0x004ce7ee
004CE7E7  83 F8 02                  CMP EAX,0x2
004CE7EA  74 02                     JZ 0x004ce7ee
004CE7EC  33 FF                     XOR EDI,EDI
LAB_004ce7ee:
004CE7EE  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004CE7F4  83 F8 40                  CMP EAX,0x40
004CE7F7  74 05                     JZ 0x004ce7fe
004CE7F9  83 F8 49                  CMP EAX,0x49
004CE7FC  75 05                     JNZ 0x004ce803
LAB_004ce7fe:
004CE7FE  5F                        POP EDI
004CE7FF  33 C0                     XOR EAX,EAX
004CE801  5E                        POP ESI
004CE802  C3                        RET
LAB_004ce803:
004CE803  85 FF                     TEST EDI,EDI
004CE805  74 34                     JZ 0x004ce83b
004CE807  8B 86 DC 04 00 00         MOV EAX,dword ptr [ESI + 0x4dc]
004CE80D  85 C0                     TEST EAX,EAX
004CE80F  74 2A                     JZ 0x004ce83b
004CE811  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
004CE817  8B 8E E4 04 00 00         MOV ECX,dword ptr [ESI + 0x4e4]
004CE81D  8B 96 E0 04 00 00         MOV EDX,dword ptr [ESI + 0x4e0]
004CE823  50                        PUSH EAX
004CE824  51                        PUSH ECX
004CE825  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004CE82B  52                        PUSH EDX
004CE82C  E8 A3 35 F3 FF            CALL 0x00401dd4
004CE831  C7 86 DC 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4dc],0x0
LAB_004ce83b:
004CE83B  8B C7                     MOV EAX,EDI
004CE83D  5F                        POP EDI
004CE83E  5E                        POP ESI
004CE83F  C3                        RET
