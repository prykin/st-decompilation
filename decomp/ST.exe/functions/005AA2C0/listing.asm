FUN_005aa2c0:
005AA2C0  55                        PUSH EBP
005AA2C1  8B EC                     MOV EBP,ESP
005AA2C3  51                        PUSH ECX
005AA2C4  53                        PUSH EBX
005AA2C5  56                        PUSH ESI
005AA2C6  68 C3 20 00 00            PUSH 0x20c3
005AA2CB  E8 00 62 10 00            CALL 0x006b04d0
005AA2D0  8B F0                     MOV ESI,EAX
005AA2D2  33 DB                     XOR EBX,EBX
005AA2D4  3B F3                     CMP ESI,EBX
005AA2D6  0F 84 E4 02 00 00         JZ 0x005aa5c0
005AA2DC  57                        PUSH EDI
005AA2DD  8B CE                     MOV ECX,ESI
005AA2DF  E8 CC BC 13 00            CALL 0x006e5fb0
005AA2E4  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
005AA2EA  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005AA2ED  B9 08 00 00 00            MOV ECX,0x8
005AA2F2  33 C0                     XOR EAX,EAX
005AA2F4  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005AA2F7  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005AA2FA  F3 AB                     STOSD.REP ES:EDI
005AA2FC  B9 08 00 00 00            MOV ECX,0x8
005AA301  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005AA304  F3 AB                     STOSD.REP ES:EDI
005AA306  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005AA30C  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005AA312  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005aa319:
005AA319  8D 8F 6F FF FF FF         LEA ECX,[EDI + 0xffffff6f]
005AA31F  E8 FC B4 16 00            CALL 0x00715820
005AA324  8B CF                     MOV ECX,EDI
005AA326  E8 F5 B4 16 00            CALL 0x00715820
005AA32B  8D 8F 91 00 00 00         LEA ECX,[EDI + 0x91]
005AA331  E8 EA B4 16 00            CALL 0x00715820
005AA336  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005AA339  81 C7 FB 01 00 00         ADD EDI,0x1fb
005AA33F  48                        DEC EAX
005AA340  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AA343  75 D4                     JNZ 0x005aa319
005AA345  C7 06 08 C0 79 00         MOV dword ptr [ESI],0x79c008
005AA34B  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005AA34F  B9 0D 00 00 00            MOV ECX,0xd
005AA354  33 C0                     XOR EAX,EAX
005AA356  8D 7E 66                  LEA EDI,[ESI + 0x66]
005AA359  88 9E 9A 00 00 00         MOV byte ptr [ESI + 0x9a],BL
005AA35F  F3 AB                     STOSD.REP ES:EDI
005AA361  8D 96 BC 00 00 00         LEA EDX,[ESI + 0xbc]
005AA367  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005aa36e:
005AA36E  B9 09 00 00 00            MOV ECX,0x9
005AA373  33 C0                     XOR EAX,EAX
005AA375  8B FA                     MOV EDI,EDX
005AA377  81 C2 FB 01 00 00         ADD EDX,0x1fb
005AA37D  F3 AB                     STOSD.REP ES:EDI
005AA37F  66 AB                     STOSW ES:EDI
005AA381  AA                        STOSB ES:EDI
005AA382  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005AA385  48                        DEC EAX
005AA386  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AA389  75 E3                     JNZ 0x005aa36e
005AA38B  8D 8E 28 1B 00 00         LEA ECX,[ESI + 0x1b28]
005AA391  E8 8A B4 16 00            CALL 0x00715820
005AA396  8D 8E B9 1B 00 00         LEA ECX,[ESI + 0x1bb9]
005AA39C  E8 7F B4 16 00            CALL 0x00715820
005AA3A1  8D 8E 4A 1C 00 00         LEA ECX,[ESI + 0x1c4a]
005AA3A7  E8 74 B4 16 00            CALL 0x00715820
005AA3AC  8D 8E DB 1C 00 00         LEA ECX,[ESI + 0x1cdb]
005AA3B2  E8 69 B4 16 00            CALL 0x00715820
005AA3B7  8D 8E 6C 1D 00 00         LEA ECX,[ESI + 0x1d6c]
005AA3BD  E8 5E B4 16 00            CALL 0x00715820
005AA3C2  8D 8E FD 1D 00 00         LEA ECX,[ESI + 0x1dfd]
005AA3C8  E8 53 B4 16 00            CALL 0x00715820
005AA3CD  B8 01 00 00 00            MOV EAX,0x1
005AA3D2  C7 06 2C C0 79 00         MOV dword ptr [ESI],0x79c02c
005AA3D8  89 86 6B 1A 00 00         MOV dword ptr [ESI + 0x1a6b],EAX
005AA3DE  88 46 65                  MOV byte ptr [ESI + 0x65],AL
005AA3E1  88 9E 61 1A 00 00         MOV byte ptr [ESI + 0x1a61],BL
005AA3E7  88 9E 5F 1A 00 00         MOV byte ptr [ESI + 0x1a5f],BL
005AA3ED  88 9E 60 1A 00 00         MOV byte ptr [ESI + 0x1a60],BL
005AA3F3  88 86 62 1A 00 00         MOV byte ptr [ESI + 0x1a62],AL
005AA3F9  89 9E 2F 1F 00 00         MOV dword ptr [ESI + 0x1f2f],EBX
005AA3FF  89 9E 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EBX
005AA405  89 9E 27 1F 00 00         MOV dword ptr [ESI + 0x1f27],EBX
005AA40B  89 9E 2B 1F 00 00         MOV dword ptr [ESI + 0x1f2b],EBX
005AA411  89 9E 67 1A 00 00         MOV dword ptr [ESI + 0x1a67],EBX
005AA417  89 9E 7F 1A 00 00         MOV dword ptr [ESI + 0x1a7f],EBX
005AA41D  89 9E 7B 1A 00 00         MOV dword ptr [ESI + 0x1a7b],EBX
005AA423  89 9E 77 1A 00 00         MOV dword ptr [ESI + 0x1a77],EBX
005AA429  89 9E 73 1A 00 00         MOV dword ptr [ESI + 0x1a73],EBX
005AA42F  89 9E 6F 1A 00 00         MOV dword ptr [ESI + 0x1a6f],EBX
005AA435  89 9E 8B 1A 00 00         MOV dword ptr [ESI + 0x1a8b],EBX
005AA43B  89 9E 87 1A 00 00         MOV dword ptr [ESI + 0x1a87],EBX
005AA441  83 C8 FF                  OR EAX,0xffffffff
005AA444  89 9E 83 1A 00 00         MOV dword ptr [ESI + 0x1a83],EBX
005AA44A  89 86 8F 1A 00 00         MOV dword ptr [ESI + 0x1a8f],EAX
005AA450  C7 86 93 1A 00 00 09 00 00 00  MOV dword ptr [ESI + 0x1a93],0x9
005AA45A  89 9E 97 1A 00 00         MOV dword ptr [ESI + 0x1a97],EBX
005AA460  89 9E AB 1A 00 00         MOV dword ptr [ESI + 0x1aab],EBX
005AA466  89 9E B3 1A 00 00         MOV dword ptr [ESI + 0x1ab3],EBX
005AA46C  89 9E 9B 1A 00 00         MOV dword ptr [ESI + 0x1a9b],EBX
005AA472  89 9E 9F 1A 00 00         MOV dword ptr [ESI + 0x1a9f],EBX
005AA478  89 9E A3 1A 00 00         MOV dword ptr [ESI + 0x1aa3],EBX
005AA47E  89 9E B7 1A 00 00         MOV dword ptr [ESI + 0x1ab7],EBX
005AA484  89 86 BC 1A 00 00         MOV dword ptr [ESI + 0x1abc],EAX
005AA48A  89 9E C0 1A 00 00         MOV dword ptr [ESI + 0x1ac0],EBX
005AA490  88 9E BB 1A 00 00         MOV byte ptr [ESI + 0x1abb],BL
005AA496  89 9E E4 1A 00 00         MOV dword ptr [ESI + 0x1ae4],EBX
005AA49C  89 9E E0 1A 00 00         MOV dword ptr [ESI + 0x1ae0],EBX
005AA4A2  89 9E DC 1A 00 00         MOV dword ptr [ESI + 0x1adc],EBX
005AA4A8  89 9E D8 1A 00 00         MOV dword ptr [ESI + 0x1ad8],EBX
005AA4AE  89 9E D0 1A 00 00         MOV dword ptr [ESI + 0x1ad0],EBX
005AA4B4  89 9E D4 1A 00 00         MOV dword ptr [ESI + 0x1ad4],EBX
005AA4BA  89 9E CC 1A 00 00         MOV dword ptr [ESI + 0x1acc],EBX
005AA4C0  89 9E C8 1A 00 00         MOV dword ptr [ESI + 0x1ac8],EBX
005AA4C6  89 9E C4 1A 00 00         MOV dword ptr [ESI + 0x1ac4],EBX
005AA4CC  89 9E 04 1B 00 00         MOV dword ptr [ESI + 0x1b04],EBX
005AA4D2  89 9E 00 1B 00 00         MOV dword ptr [ESI + 0x1b00],EBX
005AA4D8  89 9E FC 1A 00 00         MOV dword ptr [ESI + 0x1afc],EBX
005AA4DE  89 9E F8 1A 00 00         MOV dword ptr [ESI + 0x1af8],EBX
005AA4E4  89 9E F4 1A 00 00         MOV dword ptr [ESI + 0x1af4],EBX
005AA4EA  89 9E F0 1A 00 00         MOV dword ptr [ESI + 0x1af0],EBX
005AA4F0  89 9E EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EBX
005AA4F6  89 9E E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EBX
005AA4FC  89 9E 08 1B 00 00         MOV dword ptr [ESI + 0x1b08],EBX
005AA502  89 9E 0C 1B 00 00         MOV dword ptr [ESI + 0x1b0c],EBX
005AA508  89 9E 9A 1E 00 00         MOV dword ptr [ESI + 0x1e9a],EBX
005AA50E  89 9E 96 1E 00 00         MOV dword ptr [ESI + 0x1e96],EBX
005AA514  89 9E 92 1E 00 00         MOV dword ptr [ESI + 0x1e92],EBX
005AA51A  89 9E 8E 1E 00 00         MOV dword ptr [ESI + 0x1e8e],EBX
005AA520  89 9E 24 1B 00 00         MOV dword ptr [ESI + 0x1b24],EBX
005AA526  89 9E 20 1B 00 00         MOV dword ptr [ESI + 0x1b20],EBX
005AA52C  89 9E 1C 1B 00 00         MOV dword ptr [ESI + 0x1b1c],EBX
005AA532  89 9E 18 1B 00 00         MOV dword ptr [ESI + 0x1b18],EBX
005AA538  89 9E 14 1B 00 00         MOV dword ptr [ESI + 0x1b14],EBX
005AA53E  89 9E 10 1B 00 00         MOV dword ptr [ESI + 0x1b10],EBX
005AA544  89 9E A2 1E 00 00         MOV dword ptr [ESI + 0x1ea2],EBX
005AA54A  89 9E 9E 1E 00 00         MOV dword ptr [ESI + 0x1e9e],EBX
005AA550  89 9E AA 1E 00 00         MOV dword ptr [ESI + 0x1eaa],EBX
005AA556  89 9E A6 1E 00 00         MOV dword ptr [ESI + 0x1ea6],EBX
005AA55C  89 9E AE 1E 00 00         MOV dword ptr [ESI + 0x1eae],EBX
005AA562  89 9E D7 1E 00 00         MOV dword ptr [ESI + 0x1ed7],EBX
005AA568  B9 0F 00 00 00            MOV ECX,0xf
005AA56D  33 C0                     XOR EAX,EAX
005AA56F  8D BE E7 1E 00 00         LEA EDI,[ESI + 0x1ee7]
005AA575  89 9E D3 1E 00 00         MOV dword ptr [ESI + 0x1ed3],EBX
005AA57B  89 9E BA 1E 00 00         MOV dword ptr [ESI + 0x1eba],EBX
005AA581  89 9E B6 1E 00 00         MOV dword ptr [ESI + 0x1eb6],EBX
005AA587  89 9E BE 1E 00 00         MOV dword ptr [ESI + 0x1ebe],EBX
005AA58D  C7 86 C2 1E 00 00 00 01 00 00  MOV dword ptr [ESI + 0x1ec2],0x100
005AA597  89 9E CE 1E 00 00         MOV dword ptr [ESI + 0x1ece],EBX
005AA59D  89 9E DB 1E 00 00         MOV dword ptr [ESI + 0x1edb],EBX
005AA5A3  89 9E E3 1E 00 00         MOV dword ptr [ESI + 0x1ee3],EBX
005AA5A9  89 9E DF 1E 00 00         MOV dword ptr [ESI + 0x1edf],EBX
005AA5AF  F3 AB                     STOSD.REP ES:EDI
005AA5B1  89 9E B3 1F 00 00         MOV dword ptr [ESI + 0x1fb3],EBX
005AA5B7  8B C6                     MOV EAX,ESI
005AA5B9  5F                        POP EDI
005AA5BA  5E                        POP ESI
005AA5BB  5B                        POP EBX
005AA5BC  8B E5                     MOV ESP,EBP
005AA5BE  5D                        POP EBP
005AA5BF  C3                        RET
LAB_005aa5c0:
005AA5C0  5E                        POP ESI
005AA5C1  33 C0                     XOR EAX,EAX
005AA5C3  5B                        POP EBX
005AA5C4  8B E5                     MOV ESP,EBP
005AA5C6  5D                        POP EBP
005AA5C7  C3                        RET
