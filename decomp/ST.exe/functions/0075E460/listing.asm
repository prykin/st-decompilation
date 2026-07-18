FUN_0075e460:
0075E460  55                        PUSH EBP
0075E461  8B EC                     MOV EBP,ESP
0075E463  53                        PUSH EBX
0075E464  56                        PUSH ESI
0075E465  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075E468  57                        PUSH EDI
0075E469  6A 2C                     PUSH 0x2c
0075E46B  6A 01                     PUSH 0x1
0075E46D  8B 06                     MOV EAX,dword ptr [ESI]
0075E46F  56                        PUSH ESI
0075E470  FF 10                     CALL dword ptr [EAX]
0075E472  8B F8                     MOV EDI,EAX
0075E474  33 DB                     XOR EBX,EBX
0075E476  89 BE BA 01 00 00         MOV dword ptr [ESI + 0x1ba],EDI
0075E47C  C7 07 30 E6 75 00         MOV dword ptr [EDI],0x75e630
0075E482  C7 47 0C 20 F7 75 00      MOV dword ptr [EDI + 0xc],0x75f720
0075E489  89 5F 20                  MOV dword ptr [EDI + 0x20],EBX
0075E48C  89 5F 28                  MOV dword ptr [EDI + 0x28],EBX
0075E48F  83 7E 70 03               CMP dword ptr [ESI + 0x70],0x3
0075E493  74 18                     JZ 0x0075e4ad
0075E495  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075E49B  68 1B 05 00 00            PUSH 0x51b
0075E4A0  68 88 2E 7F 00            PUSH 0x7f2e88
0075E4A5  51                        PUSH ECX
0075E4A6  6A 2E                     PUSH 0x2e
0075E4A8  E8 93 79 F4 FF            CALL 0x006a5e40
LAB_0075e4ad:
0075E4AD  8B 16                     MOV EDX,dword ptr [ESI]
0075E4AF  68 80 00 00 00            PUSH 0x80
0075E4B4  6A 01                     PUSH 0x1
0075E4B6  56                        PUSH ESI
0075E4B7  FF 12                     CALL dword ptr [EDX]
0075E4B9  89 47 18                  MOV dword ptr [EDI + 0x18],EAX
LAB_0075e4bc:
0075E4BC  8B 06                     MOV EAX,dword ptr [ESI]
0075E4BE  68 00 10 00 00            PUSH 0x1000
0075E4C3  6A 01                     PUSH 0x1
0075E4C5  56                        PUSH ESI
0075E4C6  FF 50 04                  CALL dword ptr [EAX + 0x4]
0075E4C9  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
0075E4CC  83 C3 04                  ADD EBX,0x4
0075E4CF  81 FB 80 00 00 00         CMP EBX,0x80
0075E4D5  89 44 0B FC               MOV dword ptr [EBX + ECX*0x1 + -0x4],EAX
0075E4D9  7C E1                     JL 0x0075e4bc
0075E4DB  C7 47 1C 01 00 00 00      MOV dword ptr [EDI + 0x1c],0x1
0075E4E2  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
0075E4E5  85 C0                     TEST EAX,EAX
0075E4E7  74 52                     JZ 0x0075e53b
0075E4E9  8B 5E 58                  MOV EBX,dword ptr [ESI + 0x58]
0075E4EC  83 FB 08                  CMP EBX,0x8
0075E4EF  7D 18                     JGE 0x0075e509
0075E4F1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075E4F7  68 30 05 00 00            PUSH 0x530
0075E4FC  68 88 2E 7F 00            PUSH 0x7f2e88
0075E501  52                        PUSH EDX
0075E502  6A 37                     PUSH 0x37
0075E504  E8 37 79 F4 FF            CALL 0x006a5e40
LAB_0075e509:
0075E509  81 FB 00 01 00 00         CMP EBX,0x100
0075E50F  7E 17                     JLE 0x0075e528
0075E511  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0075E516  68 33 05 00 00            PUSH 0x533
0075E51B  68 88 2E 7F 00            PUSH 0x7f2e88
0075E520  50                        PUSH EAX
0075E521  6A 38                     PUSH 0x38
0075E523  E8 18 79 F4 FF            CALL 0x006a5e40
LAB_0075e528:
0075E528  8B 0E                     MOV ECX,dword ptr [ESI]
0075E52A  6A 03                     PUSH 0x3
0075E52C  53                        PUSH EBX
0075E52D  6A 01                     PUSH 0x1
0075E52F  56                        PUSH ESI
0075E530  FF 51 08                  CALL dword ptr [ECX + 0x8]
0075E533  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
0075E536  89 5F 14                  MOV dword ptr [EDI + 0x14],EBX
0075E539  EB 07                     JMP 0x0075e542
LAB_0075e53b:
0075E53B  C7 47 10 00 00 00 00      MOV dword ptr [EDI + 0x10],0x0
LAB_0075e542:
0075E542  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
0075E545  B9 02 00 00 00            MOV ECX,0x2
0075E54A  85 C0                     TEST EAX,EAX
0075E54C  74 03                     JZ 0x0075e551
0075E54E  89 4E 50                  MOV dword ptr [ESI + 0x50],ECX
LAB_0075e551:
0075E551  39 4E 50                  CMP dword ptr [ESI + 0x50],ECX
0075E554  75 1C                     JNZ 0x0075e572
0075E556  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0075E559  8B 16                     MOV EDX,dword ptr [ESI]
0075E55B  03 C1                     ADD EAX,ECX
0075E55D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0075E560  D1 E0                     SHL EAX,0x1
0075E562  50                        PUSH EAX
0075E563  6A 01                     PUSH 0x1
0075E565  56                        PUSH ESI
0075E566  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075E569  56                        PUSH ESI
0075E56A  89 47 20                  MOV dword ptr [EDI + 0x20],EAX
0075E56D  E8 0E 00 00 00            CALL 0x0075e580
LAB_0075e572:
0075E572  5F                        POP EDI
0075E573  5E                        POP ESI
0075E574  5B                        POP EBX
0075E575  5D                        POP EBP
0075E576  C2 04 00                  RET 0x4
