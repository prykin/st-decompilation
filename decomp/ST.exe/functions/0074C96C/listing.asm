FUN_0074c96c:
0074C96C  55                        PUSH EBP
0074C96D  8B EC                     MOV EBP,ESP
0074C96F  51                        PUSH ECX
0074C970  56                        PUSH ESI
0074C971  57                        PUSH EDI
0074C972  8B F1                     MOV ESI,ECX
0074C974  33 FF                     XOR EDI,EDI
0074C976  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0074C979  39 BE 8C 00 00 00         CMP dword ptr [ESI + 0x8c],EDI
0074C97F  75 2F                     JNZ 0x0074c9b0
0074C981  68 E8 00 00 00            PUSH 0xe8
0074C986  E8 A5 1B FE FF            CALL 0x0072e530
0074C98B  3B C7                     CMP EAX,EDI
0074C98D  59                        POP ECX
0074C98E  74 14                     JZ 0x0074c9a4
0074C990  8D 4D FC                  LEA ECX,[EBP + -0x4]
0074C993  68 7C E2 7E 00            PUSH 0x7ee27c
0074C998  51                        PUSH ECX
0074C999  56                        PUSH ESI
0074C99A  57                        PUSH EDI
0074C99B  8B C8                     MOV ECX,EAX
0074C99D  E8 23 04 00 00            CALL 0x0074cdc5
0074C9A2  EB 02                     JMP 0x0074c9a6
LAB_0074c9a4:
0074C9A4  33 C0                     XOR EAX,EAX
LAB_0074c9a6:
0074C9A6  3B C7                     CMP EAX,EDI
0074C9A8  89 86 8C 00 00 00         MOV dword ptr [ESI + 0x8c],EAX
0074C9AE  74 4E                     JZ 0x0074c9fe
LAB_0074c9b0:
0074C9B0  39 BE 90 00 00 00         CMP dword ptr [ESI + 0x90],EDI
0074C9B6  75 46                     JNZ 0x0074c9fe
0074C9B8  68 B0 00 00 00            PUSH 0xb0
0074C9BD  E8 6E 1B FE FF            CALL 0x0072e530
0074C9C2  3B C7                     CMP EAX,EDI
0074C9C4  59                        POP ECX
0074C9C5  74 14                     JZ 0x0074c9db
0074C9C7  8D 4D FC                  LEA ECX,[EBP + -0x4]
0074C9CA  68 88 E2 7E 00            PUSH 0x7ee288
0074C9CF  51                        PUSH ECX
0074C9D0  56                        PUSH ESI
0074C9D1  57                        PUSH EDI
0074C9D2  8B C8                     MOV ECX,EAX
0074C9D4  E8 E7 05 00 00            CALL 0x0074cfc0
0074C9D9  EB 02                     JMP 0x0074c9dd
LAB_0074c9db:
0074C9DB  33 C0                     XOR EAX,EAX
LAB_0074c9dd:
0074C9DD  3B C7                     CMP EAX,EDI
0074C9DF  89 86 90 00 00 00         MOV dword ptr [ESI + 0x90],EAX
0074C9E5  75 17                     JNZ 0x0074c9fe
0074C9E7  8B 8E 8C 00 00 00         MOV ECX,dword ptr [ESI + 0x8c]
0074C9ED  3B CF                     CMP ECX,EDI
0074C9EF  74 07                     JZ 0x0074c9f8
0074C9F1  8B 01                     MOV EAX,dword ptr [ECX]
0074C9F3  6A 01                     PUSH 0x1
0074C9F5  FF 50 0C                  CALL dword ptr [EAX + 0xc]
LAB_0074c9f8:
0074C9F8  89 BE 8C 00 00 00         MOV dword ptr [ESI + 0x8c],EDI
LAB_0074c9fe:
0074C9FE  39 7D 08                  CMP dword ptr [EBP + 0x8],EDI
0074CA01  75 08                     JNZ 0x0074ca0b
0074CA03  8B 86 8C 00 00 00         MOV EAX,dword ptr [ESI + 0x8c]
0074CA09  EB 10                     JMP 0x0074ca1b
LAB_0074ca0b:
0074CA0B  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
0074CA0F  75 08                     JNZ 0x0074ca19
0074CA11  8B 86 90 00 00 00         MOV EAX,dword ptr [ESI + 0x90]
0074CA17  EB 02                     JMP 0x0074ca1b
LAB_0074ca19:
0074CA19  33 C0                     XOR EAX,EAX
LAB_0074ca1b:
0074CA1B  5F                        POP EDI
0074CA1C  5E                        POP ESI
0074CA1D  C9                        LEAVE
0074CA1E  C2 04 00                  RET 0x4
