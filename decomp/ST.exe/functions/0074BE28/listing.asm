FUN_0074be28:
0074BE28  56                        PUSH ESI
0074BE29  8B F1                     MOV ESI,ECX
0074BE2B  57                        PUSH EDI
0074BE2C  8B 8E 8C 00 00 00         MOV ECX,dword ptr [ESI + 0x8c]
0074BE32  85 C9                     TEST ECX,ECX
0074BE34  74 07                     JZ 0x0074be3d
0074BE36  8B 01                     MOV EAX,dword ptr [ECX]
0074BE38  6A 01                     PUSH 0x1
0074BE3A  FF 50 0C                  CALL dword ptr [EAX + 0xc]
LAB_0074be3d:
0074BE3D  8B 8E 90 00 00 00         MOV ECX,dword ptr [ESI + 0x90]
0074BE43  85 C9                     TEST ECX,ECX
0074BE45  74 07                     JZ 0x0074be4e
0074BE47  8B 01                     MOV EAX,dword ptr [ECX]
0074BE49  6A 01                     PUSH 0x1
0074BE4B  FF 50 0C                  CALL dword ptr [EAX + 0xc]
LAB_0074be4e:
0074BE4E  8B 3D 84 BB 85 00         MOV EDI,dword ptr [0x0085bb84]
0074BE54  8D 46 74                  LEA EAX,[ESI + 0x74]
0074BE57  50                        PUSH EAX
0074BE58  FF D7                     CALL EDI
0074BE5A  8D 46 5C                  LEA EAX,[ESI + 0x5c]
0074BE5D  50                        PUSH EAX
0074BE5E  FF D7                     CALL EDI
0074BE60  8B CE                     MOV ECX,ESI
0074BE62  E8 10 B1 FF FF            CALL 0x00746f77
0074BE67  5F                        POP EDI
0074BE68  5E                        POP ESI
0074BE69  C3                        RET
