from django.db import models

# Create your models here.
class Content(models.Model):
    title = models.ChaarField(max_length=50)
    author = models.ChaarField(max_length=10)
    description = models.TextField()