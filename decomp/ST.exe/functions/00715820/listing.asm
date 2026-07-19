SpriteClassTy::SpriteClassTy:
00715820  8B C1                     MOV EAX,ECX
00715822  33 C9                     XOR ECX,ECX
00715824  8D 50 2C                  LEA EDX,[EAX + 0x2c]
00715827  C7 00 1C E2 79 00         MOV dword ptr [EAX],0x79e21c
0071582D  C6 40 4C FF               MOV byte ptr [EAX + 0x4c],0xff
00715831  89 48 51                  MOV dword ptr [EAX + 0x51],ECX
00715834  89 48 55                  MOV dword ptr [EAX + 0x55],ECX
00715837  89 48 59                  MOV dword ptr [EAX + 0x59],ECX
0071583A  89 48 48                  MOV dword ptr [EAX + 0x48],ECX
0071583D  89 48 5D                  MOV dword ptr [EAX + 0x5d],ECX
00715840  89 48 61                  MOV dword ptr [EAX + 0x61],ECX
00715843  C7 40 04 FF FF FF FF      MOV dword ptr [EAX + 0x4],0xffffffff
0071584A  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0071584D  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
00715850  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
00715853  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
00715856  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
00715859  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
0071585C  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
0071585F  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
00715862  89 48 28                  MOV dword ptr [EAX + 0x28],ECX
00715865  89 48 40                  MOV dword ptr [EAX + 0x40],ECX
00715868  89 48 44                  MOV dword ptr [EAX + 0x44],ECX
0071586B  89 48 4D                  MOV dword ptr [EAX + 0x4d],ECX
0071586E  88 48 65                  MOV byte ptr [EAX + 0x65],CL
00715871  89 88 85 00 00 00         MOV dword ptr [EAX + 0x85],ECX
00715877  89 88 89 00 00 00         MOV dword ptr [EAX + 0x89],ECX
0071587D  89 88 8D 00 00 00         MOV dword ptr [EAX + 0x8d],ECX
00715883  89 0A                     MOV dword ptr [EDX],ECX
00715885  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00715888  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
0071588B  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0071588E  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
00715891  C3                        RET
