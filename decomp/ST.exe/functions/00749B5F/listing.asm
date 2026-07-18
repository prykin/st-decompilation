FUN_00749b5f:
00749B5F  56                        PUSH ESI
00749B60  8B F1                     MOV ESI,ECX
00749B62  57                        PUSH EDI
00749B63  C7 06 D0 13 7A 00         MOV dword ptr [ESI],0x7a13d0
00749B69  C7 46 0C 90 13 7A 00      MOV dword ptr [ESI + 0xc],0x7a1390
00749B70  C7 46 10 78 13 7A 00      MOV dword ptr [ESI + 0x10],0x7a1378
00749B77  E8 67 0C 00 00            CALL 0x0074a7e3
00749B7C  8B CE                     MOV ECX,ESI
00749B7E  E8 55 0A 00 00            CALL 0x0074a5d8
00749B83  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
00749B86  85 C0                     TEST EAX,EAX
00749B88  74 0E                     JZ 0x00749b98
00749B8A  8D 48 08                  LEA ECX,[EAX + 0x8]
00749B8D  6A 01                     PUSH 0x1
00749B8F  8B 01                     MOV EAX,dword ptr [ECX]
00749B91  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00749B94  83 66 50 00               AND dword ptr [ESI + 0x50],0x0
LAB_00749b98:
00749B98  8B 4E 78                  MOV ECX,dword ptr [ESI + 0x78]
00749B9B  85 C9                     TEST ECX,ECX
00749B9D  74 0B                     JZ 0x00749baa
00749B9F  8B 01                     MOV EAX,dword ptr [ECX]
00749BA1  6A 01                     PUSH 0x1
00749BA3  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00749BA6  83 66 78 00               AND dword ptr [ESI + 0x78],0x0
LAB_00749baa:
00749BAA  8B 3D 84 BB 85 00         MOV EDI,dword ptr [0x0085bb84]
00749BB0  8D 86 94 00 00 00         LEA EAX,[ESI + 0x94]
00749BB6  50                        PUSH EAX
00749BB7  FF D7                     CALL EDI
00749BB9  8D 46 7C                  LEA EAX,[ESI + 0x7c]
00749BBC  50                        PUSH EAX
00749BBD  FF D7                     CALL EDI
00749BBF  8D 4E 5C                  LEA ECX,[ESI + 0x5c]
00749BC2  E8 3D 36 00 00            CALL 0x0074d204
00749BC7  8D 4E 58                  LEA ECX,[ESI + 0x58]
00749BCA  E8 35 36 00 00            CALL 0x0074d204
00749BCF  8D 4E 54                  LEA ECX,[ESI + 0x54]
00749BD2  E8 2D 36 00 00            CALL 0x0074d204
00749BD7  8B CE                     MOV ECX,ESI
00749BD9  E8 99 D3 FF FF            CALL 0x00746f77
00749BDE  5F                        POP EDI
00749BDF  5E                        POP ESI
00749BE0  C3                        RET
