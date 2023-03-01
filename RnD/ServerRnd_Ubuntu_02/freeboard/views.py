from django.shortcuts import render

# Create your views here.
def contents_list(request):
    return render(request, 'freeboard/contents_list.html',{})
