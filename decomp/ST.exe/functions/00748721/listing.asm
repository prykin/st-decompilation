FUN_00748721:
00748721  55                        PUSH EBP
00748722  8B EC                     MOV EBP,ESP
00748724  53                        PUSH EBX
00748725  56                        PUSH ESI
00748726  57                        PUSH EDI
00748727  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0074872A  85 FF                     TEST EDI,EDI
0074872C  75 0A                     JNZ 0x00748738
0074872E  B8 03 40 00 80            MOV EAX,0x80004003
00748733  E9 1A 01 00 00            JMP 0x00748852
LAB_00748738:
00748738  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074873B  8B 86 68 FF FF FF         MOV EAX,dword ptr [ESI + 0xffffff68]
00748741  8D 9E 68 FF FF FF         LEA EBX,[ESI + 0xffffff68]
00748747  8B CB                     MOV ECX,EBX
00748749  FF 50 38                  CALL dword ptr [EAX + 0x38]
0074874C  85 C0                     TEST EAX,EAX
0074874E  0F 85 FE 00 00 00         JNZ 0x00748852
00748754  8B 07                     MOV EAX,dword ptr [EDI]
00748756  8D 4D 0C                  LEA ECX,[EBP + 0xc]
00748759  51                        PUSH ECX
0074875A  68 70 1B 7A 00            PUSH 0x7a1b70
0074875F  57                        PUSH EDI
00748760  FF 10                     CALL dword ptr [EAX]
00748762  85 C0                     TEST EAX,EAX
00748764  7C 29                     JL 0x0074878f
00748766  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00748769  8D 56 10                  LEA EDX,[ESI + 0x10]
0074876C  52                        PUSH EDX
0074876D  6A 30                     PUSH 0x30
0074876F  8B 08                     MOV ECX,dword ptr [EAX]
00748771  50                        PUSH EAX
00748772  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
00748775  8B F8                     MOV EDI,EAX
00748777  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074877A  50                        PUSH EAX
0074877B  8B 08                     MOV ECX,dword ptr [EAX]
0074877D  FF 51 08                  CALL dword ptr [ECX + 0x8]
00748780  85 FF                     TEST EDI,EDI
00748782  0F 8D 89 00 00 00         JGE 0x00748811
00748788  8B C7                     MOV EAX,EDI
0074878A  E9 C3 00 00 00            JMP 0x00748852
LAB_0074878f:
0074878F  33 C0                     XOR EAX,EAX
00748791  C7 46 10 30 00 00 00      MOV dword ptr [ESI + 0x10],0x30
00748798  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0074879B  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0074879E  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
007487A1  8B 07                     MOV EAX,dword ptr [EDI]
007487A3  57                        PUSH EDI
007487A4  FF 50 3C                  CALL dword ptr [EAX + 0x3c]
007487A7  85 C0                     TEST EAX,EAX
007487A9  75 04                     JNZ 0x007487af
007487AB  83 4E 18 04               OR dword ptr [ESI + 0x18],0x4
LAB_007487af:
007487AF  8B 07                     MOV EAX,dword ptr [EDI]
007487B1  57                        PUSH EDI
007487B2  FF 50 24                  CALL dword ptr [EAX + 0x24]
007487B5  85 C0                     TEST EAX,EAX
007487B7  75 04                     JNZ 0x007487bd
007487B9  83 4E 18 02               OR dword ptr [ESI + 0x18],0x2
LAB_007487bd:
007487BD  8B 07                     MOV EAX,dword ptr [EDI]
007487BF  57                        PUSH EDI
007487C0  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
007487C3  85 C0                     TEST EAX,EAX
007487C5  75 04                     JNZ 0x007487cb
007487C7  83 4E 18 01               OR dword ptr [ESI + 0x18],0x1
LAB_007487cb:
007487CB  8B 07                     MOV EAX,dword ptr [EDI]
007487CD  8D 4E 28                  LEA ECX,[ESI + 0x28]
007487D0  51                        PUSH ECX
007487D1  8D 4E 20                  LEA ECX,[ESI + 0x20]
007487D4  51                        PUSH ECX
007487D5  57                        PUSH EDI
007487D6  FF 50 14                  CALL dword ptr [EAX + 0x14]
007487D9  85 C0                     TEST EAX,EAX
007487DB  7C 06                     JL 0x007487e3
007487DD  66 81 4E 18 10 01         OR word ptr [ESI + 0x18],0x110
LAB_007487e3:
007487E3  8B 07                     MOV EAX,dword ptr [EDI]
007487E5  8D 4E 34                  LEA ECX,[ESI + 0x34]
007487E8  51                        PUSH ECX
007487E9  57                        PUSH EDI
007487EA  FF 50 34                  CALL dword ptr [EAX + 0x34]
007487ED  85 C0                     TEST EAX,EAX
007487EF  75 04                     JNZ 0x007487f5
007487F1  83 4E 18 08               OR dword ptr [ESI + 0x18],0x8
LAB_007487f5:
007487F5  8B 07                     MOV EAX,dword ptr [EDI]
007487F7  8D 4E 38                  LEA ECX,[ESI + 0x38]
007487FA  51                        PUSH ECX
007487FB  57                        PUSH EDI
007487FC  FF 50 0C                  CALL dword ptr [EAX + 0xc]
007487FF  8B 07                     MOV EAX,dword ptr [EDI]
00748801  57                        PUSH EDI
00748802  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00748805  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00748808  8B 07                     MOV EAX,dword ptr [EDI]
0074880A  57                        PUSH EDI
0074880B  FF 50 10                  CALL dword ptr [EAX + 0x10]
0074880E  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
LAB_00748811:
00748811  F6 46 18 08               TEST byte ptr [ESI + 0x18],0x8
00748815  74 0E                     JZ 0x00748825
00748817  8B 03                     MOV EAX,dword ptr [EBX]
00748819  FF 76 34                  PUSH dword ptr [ESI + 0x34]
0074881C  8B CB                     MOV ECX,EBX
0074881E  FF 50 20                  CALL dword ptr [EAX + 0x20]
00748821  85 C0                     TEST EAX,EAX
00748823  75 04                     JNZ 0x00748829
LAB_00748825:
00748825  33 C0                     XOR EAX,EAX
00748827  EB 29                     JMP 0x00748852
LAB_00748829:
00748829  8D 86 74 FF FF FF         LEA EAX,[ESI + 0xffffff74]
0074882F  C7 46 D4 01 00 00 00      MOV dword ptr [ESI + -0x2c],0x1
00748836  50                        PUSH EAX
00748837  8B 08                     MOV ECX,dword ptr [EAX]
00748839  FF 51 38                  CALL dword ptr [ECX + 0x38]
0074883C  8B 4E D8                  MOV ECX,dword ptr [ESI + -0x28]
0074883F  6A 00                     PUSH 0x0
00748841  68 2A 02 04 80            PUSH 0x8004022a
00748846  6A 03                     PUSH 0x3
00748848  E8 B9 EB FF FF            CALL 0x00747406
0074884D  B8 00 02 04 80            MOV EAX,0x80040200
LAB_00748852:
00748852  5F                        POP EDI
00748853  5E                        POP ESI
00748854  5B                        POP EBX
00748855  5D                        POP EBP
00748856  C2 08 00                  RET 0x8
