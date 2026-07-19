FUN_0074b668:
0074B668  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074B66C  FF 70 4C                  PUSH dword ptr [EAX + 0x4c]
0074B66F  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
0074B672  49                        DEC ECX
0074B673  FF 70 48                  PUSH dword ptr [EAX + 0x48]
0074B676  FF 70 54                  PUSH dword ptr [EAX + 0x54]
0074B679  FF 70 50                  PUSH dword ptr [EAX + 0x50]
0074B67C  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074B680  51                        PUSH ECX
0074B681  8D 88 38 FF FF FF         LEA ECX,[EAX + 0xffffff38]
0074B687  E8 5A FF FF FF            CALL 0x0074b5e6
0074B68C  C2 08 00                  RET 0x8
