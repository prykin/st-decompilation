FUN_0074c658:
0074C658  56                        PUSH ESI
0074C659  57                        PUSH EDI
0074C65A  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074C65E  8B 7C 24 14               MOV EDI,dword ptr [ESP + 0x14]
0074C662  8B F1                     MOV ESI,ECX
0074C664  FF 74 24 18               PUSH dword ptr [ESP + 0x18]
0074C668  8D 47 5C                  LEA EAX,[EDI + 0x5c]
0074C66B  50                        PUSH EAX
0074C66C  57                        PUSH EDI
0074C66D  FF 74 24 1C               PUSH dword ptr [ESP + 0x1c]
0074C671  E8 92 BC FF FF            CALL 0x00748308
0074C676  83 A6 A4 00 00 00 00      AND dword ptr [ESI + 0xa4],0x0
0074C67D  89 BE A0 00 00 00         MOV dword ptr [ESI + 0xa0],EDI
0074C683  C7 06 68 18 7A 00         MOV dword ptr [ESI],0x7a1868
0074C689  C7 46 0C 20 18 7A 00      MOV dword ptr [ESI + 0xc],0x7a1820
0074C690  C7 46 10 08 18 7A 00      MOV dword ptr [ESI + 0x10],0x7a1808
0074C697  8B C6                     MOV EAX,ESI
0074C699  5F                        POP EDI
0074C69A  5E                        POP ESI
0074C69B  C2 10 00                  RET 0x10
