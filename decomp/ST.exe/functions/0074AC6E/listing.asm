FUN_0074ac6e:
0074AC6E  56                        PUSH ESI
0074AC6F  8B F1                     MOV ESI,ECX
0074AC71  C7 86 20 01 00 00 18 FC FF FF  MOV dword ptr [ESI + 0x120],0xfffffc18
0074AC7B  83 8E 24 01 00 00 FF      OR dword ptr [ESI + 0x124],0xffffffff
0074AC82  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0074AC88  83 8E F4 00 00 00 FF      OR dword ptr [ESI + 0xf4],0xffffffff
0074AC8F  89 86 40 01 00 00         MOV dword ptr [ESI + 0x140],EAX
0074AC95  33 C0                     XOR EAX,EAX
0074AC97  C7 86 EC 00 00 00 20 6C FB FF  MOV dword ptr [ESI + 0xec],0xfffb6c20
0074ACA1  89 86 10 01 00 00         MOV dword ptr [ESI + 0x110],EAX
0074ACA7  89 86 18 01 00 00         MOV dword ptr [ESI + 0x118],EAX
0074ACAD  89 86 28 01 00 00         MOV dword ptr [ESI + 0x128],EAX
0074ACB3  89 86 30 01 00 00         MOV dword ptr [ESI + 0x130],EAX
0074ACB9  89 86 00 01 00 00         MOV dword ptr [ESI + 0x100],EAX
0074ACBF  89 86 DC 00 00 00         MOV dword ptr [ESI + 0xdc],EAX
0074ACC5  89 86 F8 00 00 00         MOV dword ptr [ESI + 0xf8],EAX
0074ACCB  89 86 E0 00 00 00         MOV dword ptr [ESI + 0xe0],EAX
0074ACD1  89 86 F0 00 00 00         MOV dword ptr [ESI + 0xf0],EAX
0074ACD7  89 86 E4 00 00 00         MOV dword ptr [ESI + 0xe4],EAX
0074ACDD  89 86 0C 01 00 00         MOV dword ptr [ESI + 0x10c],EAX
0074ACE3  89 86 08 01 00 00         MOV dword ptr [ESI + 0x108],EAX
0074ACE9  89 86 14 01 00 00         MOV dword ptr [ESI + 0x114],EAX
0074ACEF  89 86 1C 01 00 00         MOV dword ptr [ESI + 0x11c],EAX
0074ACF5  89 86 2C 01 00 00         MOV dword ptr [ESI + 0x12c],EAX
0074ACFB  89 86 3C 01 00 00         MOV dword ptr [ESI + 0x13c],EAX
0074AD01  89 86 38 01 00 00         MOV dword ptr [ESI + 0x138],EAX
0074AD07  89 86 34 01 00 00         MOV dword ptr [ESI + 0x134],EAX
0074AD0D  89 86 D0 00 00 00         MOV dword ptr [ESI + 0xd0],EAX
0074AD13  89 86 E8 00 00 00         MOV dword ptr [ESI + 0xe8],EAX
0074AD19  89 86 D8 00 00 00         MOV dword ptr [ESI + 0xd8],EAX
0074AD1F  89 86 04 01 00 00         MOV dword ptr [ESI + 0x104],EAX
0074AD25  5E                        POP ESI
0074AD26  C3                        RET
